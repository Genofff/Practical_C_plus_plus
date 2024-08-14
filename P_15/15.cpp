#include <iostream>

//1
bool isPrime(int num) {

    int if_prime = 0;
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            if_prime++;
        }
    }
    if (if_prime > 0 || num <= 1) {
        return false;
    } else {
        return true;
    }
}

//2
int increment(int &a) {
    a = a + 1;
    return a;
}

int increment(int &a, int b) {
    a = a + b;
    return a;
}

int main() {
    for (int i = 0; i <= 21; i++)
        if (isPrime(i))
            std::cout << i << " ";
    std::cout << std::endl;

    int var = 0;

    for(int i = 0; i < 10; i++)
        if(i % 2)
            increment(var);
        else
            increment(var,i);
    std::cout << var << std::endl;
}
