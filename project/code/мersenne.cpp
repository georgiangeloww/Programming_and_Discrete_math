#include "mersenne.h"
#include <iostream>

bool isValidInput(long long num){
    return num >= 0;
}

bool isMersenneNumber(long long num){
    for(int p = 2; p < 62; p++){
        long long marnms = (1LL << p) - 1;
        if(num == marnms) return 1;
        if(marnms > num) break;
    }
    return 0;
}

bool isMersennePrime(long long num){
    if(!isMersenneNumber(num)) return 0;

    for(long long i = 2; i * i < num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

void allDivisors(long long num){
    bool isdivisors = 0;
    for(long long i = 2; i < num; i++){
        if(num % i == 0){
            isdivisors = 1;
            std::cout << i << " ";
        }
    }
    if(isdivisors){
        std::cout << "are divisors of: " << num << std::endl;
    }
    else{
        std::cout << "There are not divisors of: " << num << std::endl;
    }
}




