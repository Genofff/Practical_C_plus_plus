#include <iostream>

using namespace std;

int main() {

//6
    cout << endl << "Ex6 " << endl;
    int length_rows = 4, length_cols = 7, max_cord_i = 0, max_cord_c = 0;
    int min_mum = INT_MAX;
    int arrays_two_d_6[length_rows][length_cols];

    srand(time(nullptr));
    for (int i = 0; i < length_rows; ++i) {
        for (int c = 0; c < length_cols; ++c) {
            arrays_two_d_6[i][c] = rand() % 41 - 20;
            cout << "\t" << arrays_two_d_6[i][c] << " ";

            if (min_mum > arrays_two_d_6[i][c]) {
                min_mum = arrays_two_d_6[i][c];
                max_cord_i = i;
                max_cord_c = c;
            }
        }
        cout << endl;
    }
    cout << endl << "\t" << "Min numbers in array " << ": " << min_mum;
    cout << endl << "\t" << "Cord min numbers in array " << ": [" << max_cord_i << "]" << "[" << max_cord_c << "]";

}