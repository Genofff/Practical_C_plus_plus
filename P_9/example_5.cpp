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

    //5

    for (int i = 0; i < array_size; ++i) {
        for (int c = 0; c < array_size; ++c) {
            if (sorted_array[i] > sorted_array[c]) {
                int temp = sorted_array[i];
                sorted_array[i] = sorted_array[c];
                sorted_array[c] = temp;
            }
        }
    }

    cout << endl;
    for (int i = 0; i < array_size; i++) {
        cout << sorted_array[i] << " ";
    }

    for (int i = 0; i < array_size; ++i) {
        if (sorted_array[i] != sorted_array[i + 1]) {
            cout << endl << "Second high number: " << sorted_array[i + 1];
            break;
        }
    }

}