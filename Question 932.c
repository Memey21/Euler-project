#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    long long int sum = 0;

    for (long long int b=1;b<100000000;b++) {

        long long int i = b*b;
        char iString[30];
        sprintf(iString, "%lld",i);


            char part1[30];
            char part2[30];

            for (int j = 0;j<strlen(iString)/2;j++) {
                part1[j] = iString[j];
            }
            part1[strlen(iString)/2] = '\0';

            for (int j = strlen(iString)/2;j<strlen(iString);j++) {
                part2[j - strlen(iString)/2] = iString[j];
            }
            part2[strlen(iString)] = '\0';

           // printf("%lld \n%s  %s\n",i,  part1, part2);


            long long int intPart1;
            long long int intPart2;
            sscanf(part1, "%lld", &intPart1);
            sscanf(part2, "%lld", &intPart2);




            if ((intPart1 + intPart2) * (intPart1 + intPart2) == i && part2[0] != '0') {
                //printf("%lld\n",i);
                sum += i;
            }


    }

    printf("%lld\n", sum);

    return 0;
}

//69245339400175715
//69245339400175715