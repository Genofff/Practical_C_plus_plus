#include <iostream>

using namespace std;

int main() {
    int arraySize = 12;
    int num[arraySize];

    //ex 1
    srand(time(NULL));
    for (int i = 0; i < arraySize; ++i) {
        num[i] = rand() % 10 - 13;
        cout << num[i] << " ";
    }

    for (int i = 0; i < arraySize; i++) {
        for (int c = 0; c < arraySize; c++) {
            if (num[i] < num[c]) {
                int temp = num[i];
                num[i] = num[c];
                num[c] = temp;
            }
        }
    }
    cout << endl << "Growth:";

    for (int i = 0; i < arraySize; ++i) {
        cout << num[i] << ' ';
    }

    for (int i = 0; i < arraySize; i++) {
        for (int c = 0; c < arraySize; c++) {
            if (num[i] > num[c]) {
                int temp = num[i];
                num[i] = num[c];
                num[c] = temp;
            }
        }
    }

    cout << endl << "Decrease:";

    for (int i = 0; i < arraySize; ++i) {
        cout << num[i] << ' ';
    }
}