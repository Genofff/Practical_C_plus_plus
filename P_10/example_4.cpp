#include <iostream>

using namespace std;

int main() {

//4
    cout << endl << "Ex4 " << endl;
    int length_rows = 4, length_cols = 6;
    int arrays_two_d_4[length_rows][length_cols];

    srand(time(nullptr));
    for (int i = 0; i < length_rows; ++i) {
        for (int c = 0; c < length_cols; ++c) {
            arrays_two_d_4[i][c] = rand() % 6;
            cout << "\t" << arrays_two_d_4[i][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < length_cols; ++i) {
        int sum_cols = 0;
        for (int c = 0; c < length_rows; ++c) {
            sum_cols = sum_cols + arrays_two_d_4[c][i];
        }
        cout << "\t" << "Numbers of sum numbers in line " << i + 1 << ": " << sum_cols;
        cout << endl;
    }


}