#include <stdio.h>

int main(void) {

    long long int array[21][21];
    for (int i=0;i<21;i++) {
        array[i][0] = 1;
        array[0][i] = 1;
    }
    for (int i=1;i<21;i++) {
        for (int j=1;j<21;j++) {
            array[i][j] = array[i-1][j] + array[i][j-1];
        }
    }

    for (int i=0;i<21;i++) {
        for (int j=0;j<21;j++) {
            printf("%lld ",array[i][j]);
        }
        printf("\n\n");
    }



    printf("It isss:  %lld",array[20][20]);
    return 0;
}
