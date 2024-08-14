#include <iostream>

int main() {
    int array_size;
    std::cout << "Enter array size:" ;
    std::cin >> array_size;
    float *array = new float[array_size];
    int positive_numb = 0, negative_numb = 0;
    srand(time(nullptr));

    for (int i = 0; i < array_size; ++i) {
        array[i] = (float)rand()/(float)(RAND_MAX)* 4 - 2;
        std::cout << array[i] << " ";
        if (array[i] > 0) {
            positive_numb++;
        } else if (array[i] < 0) {
            negative_numb++;
        }
    }
    std::cout << "\n " << "positive numb: " << positive_numb;
    std::cout << "\n " << "negative numb: " << negative_numb;
    delete[]array;
}
