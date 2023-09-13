#include <iostream>
#include <string>
using namespace std;

int main()
{
  int x;
  double b;
  double c;

  cout << "enter x variable : ";
  cin >> x;
  
  cout << "b : ";
  cin >> b;
  
  cout << "c : ";
  cin >> c;
  
  if(x >= 2){
      
      cout << (x - 9 * b *x) / (x - 2 * b * pow(x, 2));
      }
        else{
          cout << (x - 2 * c * x) / (x - 5 * c * pow(x, 3));
          }
        
}
