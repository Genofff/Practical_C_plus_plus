#include <iostream>
#include <string>
using namespace std;

int main()
{
  int x;
  int y;
  
  cout << "x : ";
  cin >> x;
  
    cout << "y : ";
    cin >> y;
  
  
  if(x >= 0 && x <= 3 && y >= 0 && y <= 1){
      std::cout << "correct";
      } else {
          std::cout << "incorrect";
          }
}
