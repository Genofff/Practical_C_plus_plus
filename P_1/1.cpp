#include <iostream>
#include <string>

int main()
{
 int a = 4;
 double b = 1.310;
 double result = (pow(a,1.0/3) * cos(exp(b) - 1) * M_PI_4) / (0.5121 * (1 - log(b/a)));
 
  std::cout << result; 
}