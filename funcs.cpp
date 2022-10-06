#include <iostream>
#include "funcs.h"

// add functions here

bool isDivisibleBy(int n, int d){
    return n % d == 0;
}

bool isPrime(int n){
    if(n <= 1){
        return false;
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int nextPrime(int n){
    n++;
    while(!isPrime(n)){
        n++;
    }
    return n;
}

int countPrimes(int a, int b){
    int primes = 0;
    while(a <= b){
        if(isPrime(a)){
            primes++;
        }
        a = nextPrime(a);
    }
    return primes;
}

bool isTwinPrime(int n){
    return isPrime(n-2) || isPrime(n+2);
}

int nextTwinPrime(int n){
    n = nextPrime(n);
    while(!isTwinPrime(n)){
        n = nextPrime(n);
    }
    return n;
}

int largestTwinPrime(int a, int b){
    int greatest = -1;
    while(a <= b){
        if(isTwinPrime(a)){
            greatest = a;
        }
        a = nextTwinPrime(a);
    }
    return greatest;
}