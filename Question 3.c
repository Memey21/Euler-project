#include <stdio.h>
#include <math.h>
long long int primefact(long long int num);

int main(void) {
    long long int result = primefact(600851475143);
    printf("---%lld", result);
    return 0;
}

long long int primefact(long long int num) {
    int count=0;
    long long int primefactors[10000];
    for(long long int i=2;i<sqrt(num);i++) {
        if(num % i == 0) {
            long long int factor = primefact(num/i);
            count ++;
            primefactors[count] = factor;
            //printf("%lld\n",factor);
        }

    }
    if(count == 0) {
        return num;
    }
    else {
        long long int highest = -1;
        for(int j=0;j<=count;j++) {
            if(primefactors[j] > highest) {
                highest = primefactors[j];
            }
        }
        return highest;
    }
}


