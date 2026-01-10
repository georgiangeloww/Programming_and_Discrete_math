#include <iostream>
#include "mersenne.h"


int main(){

    long long num;
    std::cin >> num;
    if (!isValidInput(num)){
        std::cout << "Invalid input data!\n";
        return 1;
    }

    if(isMersenneNumber(num)){
        std::cout << "The number: " << num << " is a Mersenne number\n";
    }
    else{
        std::cout << "The number: " << num << " is not a Mersenne number\n";
    }



    return 0;
}