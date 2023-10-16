#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long double a, b, h, x, y;
    cout << "Enter [a,b] and h: ";
    cin >> a >> b >> h;

    cout << "-------------------\n";
    cout << ":    X   :    Y   :\n";
    cout << "-------------------\n";
    for (double i = a; i <= b; i = i + h)
    {
        if (i >= a && i <= b && i != -7)
        {
            x = i;
            y = ((5 * pow(x, 2) - 7 * x + 3) / (x + 7)) - 13 * cos(x);
            cout << ": " << x << " : " << y << "  :\n";
            cout << "-------------------\n";
        }
        else
        {
            x = i;
            cout << x << " Does not belong to ODZ \n";
            cout << "-------------------\n";
        }
    }
}
