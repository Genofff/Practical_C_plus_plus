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

    // 4

    int num_a = 0, num_higher_a = 0;

    cout << endl << "Enter number A:" << endl;
    cin >> num_a;

    for (int i = 0; i < array_size; i++) {
        if (array[i] > num_a) {
            num_higher_a++;
        }
    }
    cout << "Numbers that higher than number A: " << num_higher_a;

}