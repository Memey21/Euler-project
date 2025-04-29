#include <stdio.h>
#include <string.h>
#include <tgmath.h>

int main(void) {
    for (long long int i=0;i<1000000000;i++) {
        long long int iSquared = i*i;
        char iSquaredString[30];
        sprintf(iSquaredString, "%lld",iSquared);

        for (int j=1;j<pow(2,strlen(iSquaredString) -1) -1;j++) {

        }

    }


    return 0;
}
