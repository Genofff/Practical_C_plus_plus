#include <iostream>

using namespace std;
const int DivideByZero = 111;
using namespace std;

float internaldiv(float arg1, float arg2) {
    if (0 == arg2)
        throw DivideByZero;
    return arg1 / arg2;
}

bool div(float &res, float arg1, float arg2) {
    try {
        if (arg2 == 0) {
            throw "Your input is not valid, you can't divide by zero.";
        }
    }
    catch (const char *exception) {
        cerr << "Error: " << exception << endl;
        return false;
    }
    internaldiv(arg1, arg2);
    return true;
}

int main(void) {
    float r, a, b;

    while (cin >> a) {
        cin >> b;
        if (div(r, a, b))
            cout << r << endl;
        else {
            cout << "Are you kidding me?" << endl;
            break;
        }
    }
    return 0;
}
