#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int total = 0;
    int jExclude[1000];
    int index =0;
    for(int h=0;h<1000;h++) {
        jExclude[h] = 0;
    }


    for(int i=1;i<=333;i++) {
        total += (3 * i);
        for(int j=0;j<200;j++) {
                if(i * 3 == j * 5) {
                    jExclude[index] = j * 5;
                    index ++;
                }

        }
    }
    bool isInExclude = false;
    for(int k = 1;k<200;k++) {
        isInExclude = false;
        for(int b=0;b<1000;b++) {
            if(jExclude[b] == k*5) {
                isInExclude = true;
                printf("True for %d\n", k*5);
                break;
            }

        }

        if(isInExclude == true) {
            continue;
        }
        total += (k*5);
    }





    printf("%d", total);

    return 0;
}
