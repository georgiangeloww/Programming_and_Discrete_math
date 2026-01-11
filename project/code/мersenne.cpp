#include "mersenne.h"
#include <iostream>

bool isValidInput(long long num){
    return num >= 0;
}

bool isMersenneNumber(long long num){
    int end = 62;
    for(int p = 2; p < end; p++){
        long long marnms = (1LL << p) - 1;
        if(num == marnms) return 1;
        if(marnms > num) break;
    }
    return 0;
}
bool isPrimeNumber(long long num){
    if (num < 2) return 0;
     for(long long i = 2; i * i <= num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

bool isMersennePrime(long long num){
    return isMersenneNumber(num) && isPrimeNumber(num);
}

bool isDivisors(long long num, long long i){
    return num % i == 0;
}
            
void inputPrimeDivisors(long long num, long long primedivArr[], int &count){
    for(long long i = 2; i <= num; i++){
        if(isDivisors(num, i) && isPrimeNumber(i)){
            primedivArr[count++] = i;
        }
    }
}
