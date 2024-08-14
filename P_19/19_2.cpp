#include <iostream>

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);

    FlightBooking();

    void printStatus(int id);

    int findPercent();

    bool checkPercent();

    void checkReservs();

    void checkCapacity(int capacity);

    void add(int seats, int id);

    void cancel(int seats, int id);

    void create(int id, int capacity);

    void deleteID(int id);

private:
    int id;
    int capacity;
    int reserved;
    int percent;
};

void FlightBooking::printStatus(int id) {
    if (this->id == id) {
        std::cout << "Flight " << this->id << " : " << this->reserved << "/" << this->capacity << "(" << findPercent()
                  << "%) seats taken" << std::endl;
    } else{std::cout << "Error:this id don`t exist" << "\n";}
}

FlightBooking::FlightBooking(int id, int capacity, int reserved) {
    this->id = id;
    checkCapacity(capacity);
    this->reserved = reserved;
    checkReservs();
    if (!checkPercent()) {
        this->reserved = 0;
    }
}

FlightBooking::FlightBooking() {
    this->id = 0, this->capacity = 0, this->reserved = 0;
}

int FlightBooking::findPercent() {
    this->percent = this->reserved * 100 / this->capacity;
    return percent;
};

bool FlightBooking::checkPercent() {
    findPercent();
    if (percent > 105) {
        this->percent = 0;
        std::cout << "Percent must be less 105%" << "\n";
        return false;
    }
    return true;
}

void FlightBooking::checkReservs() {
    if (reserved < 0) {
        this->reserved = 0;
        this->percent = 0;
        std::cout << "Reserved must be more -1" << "\n";
    }
}

void FlightBooking::checkCapacity(int capacity) {
    if (capacity < 1) {
        this->capacity = 5;
        std::cout << "capacity = 5" << "\n";
    } else {
        this->capacity = capacity;
    }
}

void FlightBooking::add(int seats, int id) {
    if (this->id == id) {
        if (seats > 0) {
            this->reserved += seats;
        }
        if (!checkPercent()) {
            this->reserved -= seats;
        }
    }
}

void FlightBooking::cancel(int seats, int id) {
    if (this->id == id) {
        if (seats > 0) {
            this->reserved -= seats;
        }
        if (this->reserved < 0) {
            this->reserved += seats;
        }
    }

}

void FlightBooking::create(int id, int capacity) {
    this->id = id;
    checkCapacity(capacity);
}

void FlightBooking::deleteID(int id) {
    this->id = 0, this->capacity = 0, this->reserved = 0;
}


int main() {
    FlightBooking booking[11];
    int reserved = 0, capacity = 0, id = 0;
    std::cout << "Provide flight id:" << "\n";
    std::cin >> id;
    std::cout << "Provide flight capacity:" << "\n";
    std::cin >> capacity;
    std::cout << "Provide number of reserved seats:" << "\n";
    std::cin >> reserved;
    booking[id] = FlightBooking(id, capacity, reserved);
    booking[id].printStatus(id);

    std::string command = "";
    while (true) {
        int seats = 0;
        std::cout << "What would you like to do?:";
        std::cin >> command;

        if (command == "q") {
            break;
        }

        if (command == "add") {
            std::cout << "Enter id:";
            std::cin >> id;
            std::cout << "Enter number of seats:";
            std::cin >> seats;
            booking[id].add(seats, id);
            booking[id].printStatus(id);
        }

        if (command == "cancel") {
            std::cout << "Enter id:";
            std::cin >> id;
            std::cout << "Enter number of seats:";
            std::cin >> seats;
            booking[id].cancel(seats, id);
            booking[id].printStatus(id);
        }

        if (command == "create") {
            std::cout << "Enter id:";
            std::cin >> id;
            std::cout << "Enter number of capacity:";
            std::cin >> capacity;
            booking[id].create(id, capacity);
            booking[id].printStatus(id);
        }

        if (command == "delete") {
            std::cout << "Enter id:";
            std::cin >> id;
            booking[id].deleteID(id);
            std::cout << "Id delete"<< "\n";
        }

        if (command == "s") {
            std::cout << "Enter id:";
            std::cin >> id;
            booking[id].printStatus(id);
        }
    }

}
