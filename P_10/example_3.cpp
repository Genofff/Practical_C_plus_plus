#include <iostream>

using namespace std;

int main() {

//3

    cout << endl << "Ex3 " << endl;
    int length_rows = 5, length_cols = 7;
    int arrays_two_d_3[length_rows][length_cols];

    srand(time(nullptr));
    for (int i = 0; i < length_rows; ++i) {
        for (int c = 0; c < length_cols; ++c) {
            arrays_two_d_3[i][c] = rand() % 6;
            cout << "\t" << arrays_two_d_3[i][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < length_rows; ++i) {
        int sum_rows = 0;
        for (int c = 0; c < length_cols; ++c) {
            sum_rows = sum_rows + arrays_two_d_3[i][c];
        }
        cout << "\t" << "Numbers of sum numbers in rows " << i + 1 << ": " << sum_rows;
        cout << endl;
    }

}