#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float c, d;

    cout << "Enter 1 and 2 numbers: \n";
    cin >> a >> b;
    c = (float)1 / a;
    d = (float)1 / b;
    cout << (c - d <= 0.000001 && c - d >= -0.000001? "Results are equal (by 0.000001 epsilon)" : "Results are not equal (by 0.000001 epsilon) :(") ;
    
}

