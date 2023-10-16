#include <iostream>
#include <string>
using namespace std;
int main()
{
    unsigned int product = 1;
    for (int i = 1; i <= 20; i++)
    {
        if ( i % 2 == 0)
        {
            product = product * i;
        }
    }
    cout << "The sum of even numbers from 1 to 20: " << product;
}
