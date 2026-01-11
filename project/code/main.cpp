#include <iostream>
#include "mersenne.h"
using std::cout;
using std::endl;


int main(){
    const int MAX = 1000;
    long long primedivArr[MAX];
    int count = 0;
    bool hasDivisors = 0;
    long long num;


    cout << "Enter a number: ";
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

    if(isMersennePrime(num)){
        std::cout << "The number: " << num << " is a Mersenne prime\n";
    }
    else{
        std::cout << "The number: " << num << " is not a Mersenne prime\n";
    }

    std::cout << "Divisors of " << num << ": ";
    for(long long i = 2; i < num; i++){
        if(isDivisors(num, i)){
            hasDivisors = 1;
            std::cout << i << " ";
        }
    }
    cout << endl;
    if(!hasDivisors){    
        std::cout << "There are not divisors of: " << num << std::endl;
    }

    inputPrimeDivisors(num, primedivArr, count);

    return 0;
}