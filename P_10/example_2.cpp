#include <iostream>

using namespace std;

int main() {

    //2
    cout << endl << "Ex2 " << endl;
    int length_rows = 6, length_cols = 4;
    int arrays_two_d_2[length_rows][length_cols];

    srand(time(nullptr));
    for (int i = 0; i < length_rows; ++i) {
        for (int c = 0; c < length_cols; ++c) {
            arrays_two_d_2[i][c] = rand() % 21 - 10;
            cout << "\t" << arrays_two_d_2[i][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < length_cols; ++i) {
        int even_cols = 0;
        for (int c = 0; c < length_rows; ++c) {
            if (arrays_two_d_2[c][i] % 2 == 0 & arrays_two_d_2[c][i] != 0) {
                even_cols++;

            }
        }
        cout << "\t" << "Numbers of even numbers in cols " << i + 1 << ": " << even_cols;
        cout << endl;
    }

}