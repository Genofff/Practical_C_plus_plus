#include <iostream>

class FlightBooking {
public:
    FlightBooking(int id, std::string name, int months_membership);

    FlightBooking();

    void printStatus(int id);

    void checkName(std::string name);

    void checkMonthsMembership();

    void extend(int subscription_renewal, int id);

    void cancel(int id);

    void create(int id, std::string name);

    void deleteID(int id);

private:
    int id;
    std::string name;
    int months_membership;
};

void FlightBooking::printStatus(int id) {
    if (this->id == id) {
        std::cout << "Member " << this->id << " : " << this->name << ", subscription valid for " << this->months_membership << " months" << std::endl;
    } else{std::cout << "No members in the system" << "\n";}
}

FlightBooking::FlightBooking(int id, std::string name, int months_membership) {
    this->id = id;
    checkName(name);
    this->months_membership = months_membership;
    checkMonthsMembership();

}

FlightBooking::FlightBooking() {
    this->id = 0, this->name = "", this->months_membership = 0;
}

void FlightBooking::checkMonthsMembership() {
    if (months_membership < 0) {
        this->months_membership = 0;
        std::cout << "Months membership must be more -1" << "\n";
    }
}

void FlightBooking::checkName(std::string name) {
    this->name = name;
}

void FlightBooking::extend(int subscription_renewal, int id) {
    if (this->id == id) {
        if (subscription_renewal > 0) {
            this->months_membership += subscription_renewal;
        }
    }
}

void FlightBooking::cancel(int id) {
    if (this->id == id) {
        this->months_membership = 0;
    }

}

void FlightBooking::create(int id, std::string name) {
    this->id = id;
    checkName(name);
}

void FlightBooking::deleteID(int id) {
    this->id = 0, this->name = "", this->months_membership = 0;
}


int main() {
    FlightBooking gym[11];
    int months_membership = 0, id = 0;
    std::string name = "";
    std::cout << "Enter id:" << "\n";
    std::cin >> id;
    std::cout << "Enter months_membership:" << "\n";
    std::cin >> months_membership;
    std::cout << "Enter name:" << "\n";
    std::cin >> name;
    gym[id] = FlightBooking(id, name, months_membership);
    gym[id].printStatus(id);

    std::string command = "";
    while (true) {
        int subscription_renewal = 0;
        std::cout << "What would you like to do?:";
        std::cin >> command;

        if (command == "q") {
            break;
        }

        if (command == "extend") {
            std::cout << "Enter id:";
            std::cin >> id;
            std::cout << "Enter number of subscription_renewal:";
            std::cin >> subscription_renewal;
            gym[id].extend(subscription_renewal, id);
            gym[id].printStatus(id);
        }

        if (command == "cancel") {
            std::cout << "Enter id:";
            std::cin >> id;
            gym[id].cancel(id);
            gym[id].printStatus(id);
        }

        if (command == "create") {
            std::cout << "Enter id:";
            std::cin >> id;
            std::cout << "Enter name:";
            std::cin >> name;
            gym[id].create(id, name);
            gym[id].printStatus(id);
        }

        if (command == "delete") {
            std::cout << "Enter id:";
            std::cin >> id;
            gym[id].deleteID(id);
            std::cout << "Id delete"<< "\n";
        }

        if (command == "s") {
            std::cout << "Enter id:";
            std::cin >> id;
            gym[id].printStatus(id);
        }
    }

}
