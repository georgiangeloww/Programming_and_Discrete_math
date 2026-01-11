# pragma once

bool isValidInput(long long num);
bool isMersenneNumber(long long num);
bool isPrimeNumber(long long num);
bool isDivisors(long long num, long long i);
bool isMersennePrime(long long num);
void fillPrimeDivisors(long long num, long long arr[], int &count);
bool isComposite(int number);
void fillUniqueDivisors(int diffnum1, int diffnum2, long long diffArr[], int &diffCount);
bool isMersenneInterval(int start, int finish);
void printFirstNMersenne(int n);
void printFirstNMersennePrime(int n);
