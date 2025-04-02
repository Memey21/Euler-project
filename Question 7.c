#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void) {
    setbuf(stdout,0);
    int primeCount = 0;
    int i = 2;
    while (primeCount < 10001) {
        bool isPrime = true;
        for (int fact=2;fact<=sqrt(i);fact++) {
            if (i % fact == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true) {
            printf("%d \n",i);
            primeCount ++;
        }

        i++;
    }

    printf("%d",i-1);
    return 0;
}
