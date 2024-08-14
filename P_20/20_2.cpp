#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator);

    string toString();

    double toDouble();


};

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}

double Fraction::toDouble() {
    return (double) this->numerator / (double) this->denominator;
}

string Fraction::toString() {
    int whole_numbers = this->numerator / this->denominator;
    int remainder = this->numerator % this->denominator;
    stringstream sstring;
    if (whole_numbers != 0) {
        sstring << whole_numbers;
    }

    if (remainder != 0) {
        if (denominator < 0 && remainder > 0 && whole_numbers == 0 ||
            denominator > 0 && remainder < 0 && whole_numbers == 0) {
            sstring << "  -" << abs(remainder) << "/" << abs(denominator);
        } else {
            sstring << "  " << abs(remainder) << "/" << abs(denominator);
        }
    }

    return sstring.str();
}

// implement Fraction methods
int main(void) {
    while (true) {
        int num, den;
        char ch;
        string input = "";
        getline(cin, input);

        istringstream iss(input);
        iss >> num >> ch >> den;
        if (den != 0) {
            Fraction fraction(num, den);
            cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;
        } else { cout << "denominator can't be 0"; }

    }
}