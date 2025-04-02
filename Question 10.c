#include <stdio.h>
#include <stdbool.h>
#include <tgmath.h>
bool isPrime(int n);


int main(void) {
    long long int total = 0;
    for (int i=2;i<2000000;i++) {
        if (isPrime(i)) {
            total = total + i;
        }
    }
    printf("%lld",total);

    return 0;
}

bool isPrime(int n) {
    for (int fact=2;fact<=sqrt(n);fact++) {
        if (n % fact == 0) {
            return false;
        }
    }
    //printf("%d\n",n);
    return true;

}
//1179908154