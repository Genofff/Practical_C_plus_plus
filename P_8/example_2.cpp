#include <iostream>

using namespace std;

int main() {
    int arraySize = 12;
    int num_2[arraySize];
    cout << endl;
    srand(time(NULL));
    for (int i = 0; i < arraySize; ++i) {
        num_2[i] = rand() % 10 - 13;
        cout << num_2[i] << " ";
    }

    int max_num = INT_MIN;
    for (int i = 0; i < arraySize; ++i) {
        if (max_num < num_2[i])
            max_num = num_2[i];
    }

    cout << endl << "max_num:" << max_num << endl;

    for (int i = 0; i < arraySize; ++i) {
        if (num_2[i] == max_num) {
            break;
        } else if (num_2[i] < 0) {
            num_2[i] = 0;
        }
    }
    for (int i = 0; i < arraySize; ++i) {
        cout << num_2[i] << ' ';
    }
}