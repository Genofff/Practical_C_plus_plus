#include <iostream>
using namespace std;

int main()
{
    int n, x, vaule = 0;
    cout << "Enter value: ";
    cin >> n;
    while (n > 0)
    {
        x = n % 10;
        n = (n - x) / 10;
        if (x != 1 && x != 9)
        {
            vaule++;
        }
    }
    cout << "\n" <<"vaule:" << vaule;
}