#include <iostream>

using namespace std;

struct Date {
    int minute, hours;

};

int main() {
    Date start_event, end_event, duration_event;

    do {
        cout << "Enter hours and minute event start:" << endl;
        cin >> start_event.hours >> start_event.minute;
    } while (start_event.hours < 0 || start_event.hours > 24 || start_event.minute < 0 || start_event.minute > 59);

    do {
        cout << "Enter hours and minute event end:" << endl;
        cin >> end_event.hours >> end_event.minute;
    } while (end_event.hours < 0 || end_event.hours > 24 || end_event.minute < 0 || end_event.minute > 59);

    int duration_minute =
            ((end_event.hours * 60 + end_event.minute) - (start_event.hours * 60 + start_event.minute) + 24 * 60) %
            (24 * 60);

    duration_event.hours = duration_minute / 60;
    duration_event.minute = duration_minute % 60;

    cout << duration_event.hours << ":" << duration_event.minute;
}
