#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int sizeOfArray,numberOfOperations;
    long int leftIndex,rightIndex,summand;
    cin >> sizeOfArray >> numberOfOperations;
    //long int array[sizeOfArray] = {0};
    auto *array = new long int[sizeOfArray];
    for (int i = 0; i < numberOfOperations; i++) {
        cin >> leftIndex >> rightIndex >> summand;
        for (long int j = leftIndex-1; j < rightIndex; j++){
            array[j] += summand;
        }
    }
    long int max = 0;
    for (int i = 0; i < sizeOfArray; i++) {
        if (max < array[i]) max = array[i];
    }
    printf("%ld",max);
}