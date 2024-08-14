#include <iostream>
#include <iomanip>

int main() {
    int length_rows, length_cols;
    std::cout << "Enter array size:";
    std::cin >> length_rows >> length_cols;

    int **array = new int *[length_rows];
    for (int i = 0; i < length_rows; i++) {
        array[i] = new int[length_cols];
    }

    srand(time(nullptr));

    for (int i = 0; i < length_rows; ++i) {
        for (int j = 0; j < length_cols; ++j) {
            array[i][j] = rand() % 17 - 8;
            std::cout << std::setw(3) << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "reverse diagonal: ";
    for (int i = 0; i < length_rows; ++i) {
        std::cout << std::setw(3) << array[i][i] << " ";
    }
    std::cout << std::endl << "diagonal: ";
    for (int c = 0; c < length_rows; ++c) {
        std::cout << std::setw(3) << array[c][length_cols - 1 - c] << " ";
    }
    int even_numbers = 0, odd_numbers = 0;
    for (int i = 0; i < length_rows; ++i) {
        for (int c = 0; c < length_cols; ++c) {
            if (array[i][c] % 2 == 0 && array[i][c] != 0) {
                even_numbers++;
            } else if (array[i][c] % 2 != 0 && array[i][c] != 0) {
                odd_numbers++;
            }
        }
    }
    std::cout << std::endl << "even numbers: " << even_numbers;
    std::cout << std::endl << "odd numbers: " << odd_numbers;

    for (int i = 0; i < length_rows; i++) {
        delete[] array[i];
    }
    delete[] array;

}