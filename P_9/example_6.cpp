#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    int array_size = rand() % 5 + 5;
    int array[array_size], sorted_array[array_size];

    for (int i = 0; i < array_size; i++) {
        array[i] = rand() % 21 - 10;
        sorted_array[i] = array[i];
        cout << array[i] << " ";
    }

    // 6
    bool hasnt_zero = false;
    for (int i = 0; i < array_size; ++i) {
        if (array[i] == 0) {
            cout << endl << "Index zero number in array: " << i;
            hasnt_zero = true;
            break;
        }
    }
    if (hasnt_zero == false) {
        cout << endl << "The array doesnt have number 0";
    }

}