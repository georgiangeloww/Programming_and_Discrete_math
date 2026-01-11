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
            
void fillPrimeDivisors(long long num, long long primedivArr[], int &count){
    for(long long i = 2; i <= num; i++){
        if(isDivisors(num, i) && isPrimeNumber(i)){
            primedivArr[count++] = i;
        }
    }
}

bool isComposite(int n){
    if(n <= 3) return 0;
    return !isPrimeNumber(n);
}


void fillUniqueDivisors(int diffnum1, int diffnum2, long long diffArr[], int &diffCount){
    for(long long i = 2; i <= diffnum1; i++){

        if(isDivisors(diffnum1, i) && isComposite(diffnum1)){

            bool divInB = 0;
            if(isDivisors(diffnum2, i) && isComposite(diffnum2)){
                divInB = 1;
            }

            if(!divInB){
                diffArr[diffCount++] = i;
            }
        }
    }
}

bool isMersenneInterval(int start, int finish){
    for(int i = start; i <= finish; i++){
        if (isMersenneNumber(i)) return 1;
    }
    return 0;
}

void printFirstNMersenne(int n){
    int count = 0;
    long long i = 2;

    while (count < n) {
        if (isMersenneNumber(i)) {
            std::cout << i << " ";
            count++;
        }
        i++;
    }
    
    std::cout << std::endl;
}
