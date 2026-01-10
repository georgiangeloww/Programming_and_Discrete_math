#include <iostream>
#include "mersenne.h"


int main(){

    int num;
    std::cin >> num;
    if (!isValidInput(num)){
        std::cout << "Invalid input data!" << std::endl;
        return 1;
    }



    return 0;
}