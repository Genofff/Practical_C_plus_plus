#include <iostream>
class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    int findPercent();
    bool checkPercent();
    void checkReservs();
    void checkCapacity(int capacity);
    void add(int seats);
    void cancel(int seats);
private:
    int id;
    int capacity;
    int reserved;
    int percent;
};
void FlightBooking::printStatus()
{
    std::cout << "Flight " << this->id << " : " <<this->reserved << "/" << this->capacity<< "(" << findPercent() << "%) seats taken" << std::endl;
}
//constructor ne tilo
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
    this->id = id;
    checkCapacity(capacity);
    this->reserved = reserved;
    checkReservs();
    if (!checkPercent()){
        this->reserved = 0;
    }

}
int FlightBooking::findPercent(){
    this->percent = this->reserved * 100 / this->capacity;
    return percent;
};
bool FlightBooking::checkPercent(){
    findPercent();
    if (percent > 105){
        this->percent = 0;
        std::cout << "Percent must be less 105% "<<"\n";
        return false;
    }return true;
}
void FlightBooking::checkReservs(){
    if (reserved < 0){
        this->reserved = 0;
        this->percent = 0;
        std::cout << "Reserved must be more -1 "<<"\n";
    }
}

void FlightBooking::checkCapacity(int capacity){
    if (capacity < 1){
        this->capacity = 5;
        std::cout << "capacity = 5"<<"\n";
    } else{
        this->capacity = capacity;
    }
}

void FlightBooking::add(int seats){

    if (seats > 0){
        this->reserved += seats;
    }
    if (!checkPercent()){
        this->reserved -= seats;
    }
}

void FlightBooking::cancel(int seats){

    if (seats > 0){
        this->reserved -= seats;
    }
    if (this->reserved < 0){
        this->reserved += seats;
    }
}


int main() {
    int reserved = 0, capacity = 0;
    std::cout << "Provide flight capacity: " << "\n";
    std::cin >> capacity;
    std::cout << "Provide number of reserved seats: " << "\n";
    std::cin >> reserved;
    FlightBooking booking(1, capacity, reserved);
    booking.printStatus();

    std::string command = "";
    while (true) {
        int seats = 0;
        std::cout << "What would you like to do?: ";
        std::cin >> command;

        if (command == "q"){
            break;
        }

        if (command == "add"){
            std::cout << "Enter number of seats: ";
            std::cin >> seats;
            booking.add(seats);
            booking.printStatus();
        }

        if (command == "cancel"){
            std::cout << "Enter number of seats: ";
            std::cin >> seats;
            booking.cancel(seats);
            booking.printStatus();
        }
    }
}
