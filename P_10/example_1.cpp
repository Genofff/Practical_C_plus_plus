#include <iostream>

using namespace std;

int main() {
    //1
    cout << "Ex1 " << endl;
    int length_rows = 4, length_cols = 3;
    int arrays_two_d[length_rows][length_cols];

    srand(time(nullptr));
    for (int i = 0; i < length_rows; ++i) {
        for (int c = 0; c < length_cols; ++c) {
            arrays_two_d[i][c] = rand() % 21 - 10;
            cout << "\t" << arrays_two_d[i][c] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < length_rows; ++i) {
        int even_rows = 0;
        for (int c = 0; c < length_cols; ++c) {
            if (arrays_two_d[i][c] % 2 == 0 & arrays_two_d[i][c] != 0) {
                even_rows++;
            }
        }
        cout << "\t" << "Numbers of even numbers in rows " << i + 1 << ": " << even_rows;
        cout << endl;
    }

}