#include <iostream>

using namespace std;

int main() {

//15
    cout << endl << "Ex15 " << endl;
    int length_rows = 3, length_cols = 3;
    int sum_diagonals_1 = 0, sum_diagonals_2 = 0;
    int arrays_two_d_15[length_rows][length_cols];

    srand(time(nullptr));
    for (int i = 0; i < length_rows; ++i) {
        for (int c = 0; c < length_cols; ++c) {
            arrays_two_d_15[i][c] = rand() % 11;
            cout << "\t" << arrays_two_d_15[i][c] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < length_rows; ++i) {
        for (int c = 0; c < length_cols; ++c) {
            if (i == c) {
                sum_diagonals_1 += arrays_two_d_15[i][c];
            }
        }
        for (int c = 0; c < length_cols; ++c) {
            if (i == c) {
                sum_diagonals_2 += arrays_two_d_15[i][length_rows - c - 1];
            }
        }
    }
    cout << endl << "\t" << "Sum diagonals 1 in array " << ": " << sum_diagonals_1;
    cout << endl << "\t" << "Sum diagonals 2 in array " << ": " << sum_diagonals_2;

}