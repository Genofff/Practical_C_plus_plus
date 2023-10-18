#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "enter num"<< endl;;
    cin >> num;

    while (true) {
        if (num <= 25) {
            cout << '+';
            for (int i = 0; i < num - 2; i++)
                cout << '-';
            cout << '+' << endl;
            for (int i = 0; i < num - 2; i++) {
                cout << '|';
                for (int j = 0; j < num - 2; j++)
                    cout << ' ';
                cout << '|' << endl;
            }
            cout << '+';
            for (int i = 0; i < num - 2; i++)
                cout << '-';
            cout << '+' << endl;
            return 0;
        } else {
            cout << "Wrong number, please enter num <= 25"<< endl;
            cin >> num;
        }

    }

}