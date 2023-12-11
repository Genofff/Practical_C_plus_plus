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
// 3
    int index_max_num = 0, index_min_num = 0, min_num = INT_MAX, max_num = INT_MIN, temp;
    for (int i = 0; i < array_size; i++) {
        if (min_num > array[i]) {
            min_num = array[i];
            index_min_num = i;
        }
        if (max_num < array[i]) {
            max_num = array[i];
            index_max_num = i;

        }
    }
    cout << endl << "min_num = " << min_num;
    cout << endl << "max_num = " << max_num;

    cout << endl;
    temp = sorted_array[index_min_num];
    sorted_array[index_min_num] = sorted_array[index_max_num];
    sorted_array[index_max_num] = temp;

    for (int i = 0; i < array_size; i++) {
        cout << sorted_array[i] << " ";
    }
}