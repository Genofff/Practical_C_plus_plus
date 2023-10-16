#include <iostream>
using namespace std;

int main() {

    int a, b, c, d;

    enter_number:

    cout << "Enter number: \n";
    cin >> a >> b >> c >> d;

    if (a >= 1 && a <= 255 && b >= 1 && b <= 255 && c >= 1 && c <= 255 && d >= 1 && d <= 255) {
        cout << a << "." << b << "." << c << "." << d;
    } else{
        cout << "Error, you entered a number that is not in the range 1-255 \n";
        cout << "Try again \n";
        goto enter_number;
    }
    return 0;
}
