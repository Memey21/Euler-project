#include <stdio.h>
#include <math.h>
#include <stdbool.h>

long long int logy2(long long int number);

int main(void) {
    long long int maxSteps = 0;
    long long int maxNumber = 0;
    for (long long int i=2;i<1000000;i++) {
        long long int number = i;
        long long int currentSteps = 0;
        while (true) {
            long long int result = logy2(number);
            if (result != -1) {
                currentSteps += result;
                break;
            }
            if (number % 2 == 0) {
                number = number / 2;
            }
            else {
                number = 3 * number + 1;
            }
            currentSteps += 1;

        }
        if (currentSteps > maxSteps) {
            maxSteps = currentSteps;
            maxNumber = i;
        }

    }
    printf("Number: %lld \nSteps: %lld", maxNumber,maxSteps);
    return 0;
}

long long int logy2(long long int number) {
    if (floor(log(number)/log(2)) == log(number)/log(2)) {
        return (long long int)(log(number)/log(2) + 1);
    }
    return -1;
}