#include <iostream>

using namespace std;

struct Date {
    int minute, hours;
};

int main() {
    Date time_start, time_end;
    int elapsed_minute;

    do {
        cout << "Enter hours and minute:" << endl;
        cin >> time_start.hours >> time_start.minute;
    } while (time_start.hours < 0 || time_start.hours > 24 || time_start.minute < 0 || time_start.minute > 59);

    cout << "Enter the number of completed minute:" << endl;
    cin >> elapsed_minute;

    time_end.hours = (time_start.hours + (time_start.minute + elapsed_minute) / 60) % 24;
    time_end.minute = (time_start.minute + elapsed_minute) % 60;

    if (time_end.minute < 10) {
        cout << time_end.hours << ":" << "0" << time_end.minute;
    } else {
        cout << time_end.hours << ":" << time_end.minute;
    }

}
