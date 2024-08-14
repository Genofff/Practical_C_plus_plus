#include <iostream>
#include <ctime>

struct Date {
    int year;
    int month;
    int day;
};

Date today(void) {
    time_t t = time(nullptr);
    tm tl = *localtime(&t);

    Date currentDate;
    currentDate.year = tl.tm_year + 1900;
    currentDate.month = tl.tm_mon + 1;
    currentDate.day = tl.tm_mday;


    return currentDate;
}

bool isLeap(int year) {
    if (year % 4 == 0)
    {
        return true;
    } else
    return false;
}

int monthLength(int year, int month) {
    int array_leap[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeap(year) == true) {
        return array_leap[month - 1];
    } else if (isLeap(year) == false && month == 2) {
        return array_leap[month - 1] - 1;
    } else {
        return array_leap[month - 1];
    }
}

Date Enter_birthday(void) {
    Date b;
    do {
        std::cout << "Enter your birthday: ";
        std::cin >> b.year >> b.month >> b.day;
        std::cout << std::endl;
    } while (b.month > 12 || b.day > monthLength(b.year, b.month) || b.month == 0 || b.day == 0);
    std::cout << "birthday: " << b.year << "-" << b.month << "-" << b.day << std::endl;

    return b;
}

void Current_data(void) {
    Date b = Enter_birthday();
    Date t = today();

    int birth_day = 0, tDay = 0, all_day = 0;

    for (int i = 1; i < b.month; i++) {
        birth_day = birth_day + monthLength(b.year, i);
    }

    birth_day += b.day;

    for (int j = b.year; j < t.year; ++j) {
        for (int i = 1; i <= 12; i++) {
            tDay = tDay + monthLength(j, i);
        }
    }
    for (int i = 1; i < t.month; i++) {
        tDay = tDay + monthLength(t.year, i);
    }
    tDay += t.day;

    all_day = tDay - birth_day;

    std::cout << "birthday in day: " << birth_day << std::endl;
    std::cout << "today in day: " << tDay << std::endl;
    std::cout << "The number of days that have passed from your birthday to the current date: " << all_day << std::endl;
    std::cout << "today: " << t.year << "-" << t.month << "-" << t.day << std::endl;
}

int main() {
    Current_data();

    return 0;
}
