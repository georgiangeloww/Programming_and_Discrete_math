#include <iostream>
#include "mersenne.h"
using std::cout;
using std::endl;


int main(){
    const int MAX = 1000;
    long long primedivArr[MAX];
    long long diffArr[MAX];
    int count = 0;
    int diffCount = 0;
    bool hasDivisors = 0;
    long long num;
    int diffnum1;
    int diffnum2;
    long long start;
    long long finish;



    cout << "Enter a number: ";
    std::cin >> num;
    cout << "Enter two numbers for the difference prime divisors:" << endl;
    cout << "Number a: ";
    std::cin >> diffnum1;
    cout << "Number b: ";
    std::cin >> diffnum2;
    cout << "Enter the start of the interval for the search: ";
    std::cin >> start;
    cout << "Enter the finish of the interval for the search: ";
    std::cin >> finish;



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

    cout << "Divisors of " << num << ": ";
    for(long long i = 2; i < num; i++){
        if(isDivisors(num, i)){
            hasDivisors = 1;
            cout << i << ", ";
        }
    }
    if(!hasDivisors){    
        std::cout << "There are not divisors of: " << num << std::endl;
    }
    cout << endl;

    fillPrimeDivisors(num, primedivArr, count);

    fillUniqueDivisors(diffnum1, diffnum2, diffArr, diffCount);

    cout << "The numbers in the interval from " << start << " to " << finish << " are: ";
    if(isMersenneInterval(start, finish)){
        for(long long i = start; i < finish; i++){
            if (isMersenneNumber(i)){
                cout << i << ", ";
            }
        }
    }
   else{
        cout << "There are not Mersenne numbers in the interval from " << start << " to " << finish;
    }
    cout << endl;

    return 0;
}