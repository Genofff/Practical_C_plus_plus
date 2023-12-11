#include <iostream>

using namespace std;

int main() {

//5
    cout << endl << "Ex5 " << endl;
    int length_rows = 3, length_cols = 4;
    int max_num = INT_MIN;
    int arrays_two_d_5[length_rows][length_cols];

    srand(time(nullptr));
    int max_cord_i = 0, max_cord_c = 0;
    for (int i = 0; i < length_rows; ++i) {
        for (int c = 0; c < length_cols; ++c) {
            arrays_two_d_5[i][c] = rand() % 41 - 20;
            cout << "\t" << arrays_two_d_5[i][c] << " ";

            if (max_num < arrays_two_d_5[i][c]) {
                max_num = arrays_two_d_5[i][c];
                max_cord_i = i;
                max_cord_c = c;
            }
        }
        cout << endl;
    }

    cout << endl << "\t" << "Max numbers in array " << ": " << max_num;
    cout << endl << "\t" << "Cord max numbers in array " << ": [" << max_cord_i << "]" << "[" << max_cord_c << "]";

}