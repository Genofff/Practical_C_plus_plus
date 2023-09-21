#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, x, x2, x3; // a - ;x,x2,x3 -
    int d = 0;// кількість чисел, які більше за 3 
    char i;
    double c;

positive_number: 
cout << "Enter a three-digit positive number: ";
    cin >> a;

    if (a < 99 || a < 0 || a > 999)
    {
        cout << "The number you dialed is not a 3-digit number or positive number. Try writing another one number\n";
        goto positive_number;
    }
    x = a / 100; 
    x2 = a / 10 % 10;
    x3 = a % 10;
    cout << x << " " << x2 << " " << x3 << " ";

    if (x > 3){d++;}
    if (x2 > 3){d++;}
    if (x3 > 3){d++;}

    cout << "\nNumber of digits greater than 3: " << d;
}
