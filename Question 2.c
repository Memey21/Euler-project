#include <stdio.h>

int fibonacci(int digit1, int digit2);
int total = 2;

int main(void) {
    int result = fibonacci(1,2);
    printf("%d",total);

    return 0;
}

int fibonacci(int digit1,int digit2){
    if(digit1 > 4000000) {
        return digit1;
    }
    if(digit2>4000000) {
        return digit2;
    }
    if((digit1 + digit2)%2 == 0) {
        total += digit1 + digit2;
    }
    return fibonacci(digit2,digit1 + digit2);

}