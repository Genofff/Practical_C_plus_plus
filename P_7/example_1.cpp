#include <iostream>

using namespace std;

int main() {
    int c0,steps = 0;
    cout << "Enter value:";;
    cin >> c0;

    while (c0 != 1) {
        if (c0 % 2 == 0) {
            c0 = c0 / 2;
            steps++;
            cout << c0 << endl;
        } else if (c0 % 2 != 0) {
            c0 = 3 * c0 + 1;
            steps++;
            cout << c0 << endl;
        }
    }
    cout << "steps: " << steps;
}
