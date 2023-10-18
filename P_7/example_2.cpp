#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double pi4 = 0.;
    long n;
    int c = 0;
    cout << "Number of iterations? ";
    cin >> n;

    for (double i = 1; i < n; i = i + 2) {
        if (c % 2 == 0) {
            pi4 += (1 / i);
            c++;
        } else if (c % 2 != 0) {
            pi4 -= (1 / i);
            c++;
        }
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}
