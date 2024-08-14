#include <iostream>

bool isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0)||(year % 400 != 0))
    {
        return true;
    } else
        return false;
}

int monthLength(int year, int month) {
    int array_leap[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    if(isLeap(year) == true){
        return array_leap[month - 1];
    } else if(isLeap(year) == false && month == 2){
        return array_leap[month - 1] - 1;
    }else{
        return array_leap[month - 1];
    }
}

int main(void) {
    for (int yr = 2022; yr < 2025; yr++) {
        for (int mo = 1; mo <= 12; mo++)
            std::cout << monthLength(yr, mo) << " ";
        std::cout << std::endl;
    }
    return 0;
}


