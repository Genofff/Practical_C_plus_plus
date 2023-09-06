#include <iostream>
#include <string>

int main()
{
 int a = 1;
 double b = 20.01;
 double result = pow((0.719/b)*((pow(b,2) - pow(a,2)) / (pow(a,2) + pow(b,2))) + cos(log(b) * M_PI/6),1.0/3);
 
  std::cout << result; 
}