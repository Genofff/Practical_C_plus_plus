#include <iostream>
using namespace std;
int main(void) {
    int a = 0, b = 0, c = 0;
    cin >> b;
    cin >> a;
    try {
        if(b == 0){
            throw "Your input is not valid, you can't divide by zero.";
        }
    }
    catch (const char* exception) {
        cerr << "Error: "<< exception << endl;
    }
    c = a / b;
    cout << c << endl;
    return 0;
}