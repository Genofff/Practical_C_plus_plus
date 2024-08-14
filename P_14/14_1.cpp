#include <iostream>

bool isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0)||(year % 400 != 0))
    {
        return true;
    } else
        return false;
}

int monthLength(int year, int month) {
    switch (month) {
        case 1:
            return 31;
            break;
        case 3:
            return 31;
            break;
        case 4:
            return 30;
            break;
        case 5:
            return 31;
            break;
        case 6:
            return 30;
            break;
        case 7:
            return 31;
            break;
        case 8:
            return 31;
            break;
        case 9:
            return 30;
            break;
        case 10:
            return 31;
            break;
        case 11:
            return 30;
            break;
        case 12:
            return 31;
            break;
        default: {
            if (isLeap(year) == true && month == 2) {
                return 29;
            } else {
                return 28;
            }        }
    }
}


int main(void) {
    for (int yr = 2000; yr < 2002; yr++) {
        for (int mo = 1; mo <= 12; mo++)
            std::cout << monthLength(yr, mo) << " ";
        std::cout << std::endl;
    }
    return 0;
}
