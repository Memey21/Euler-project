#include <stdio.h>
#include <string.h>

int main(void) {
    int highest = 0;
    int highesti = 0;
    int highestj = 0;
    for (int i=100;i<1000;i++) {
        for (int j=100 + (i-100);j<1000;j++) {
            int palindrome = i * j;
            char pStr[70];
            sprintf(pStr,"%d",palindrome);

            if (palindrome/100000 >= 1) {
                //6 digit
                char first[30];
                char last[30];
                for (int p=0;p<3;p++) {
                    first[p] = pStr[p];
                    last[p] = pStr[5-p];
                }
                if (strcmp(first,last) == 0) {
                    if (palindrome>highest) {
                        highest = palindrome;
                        highesti = i;
                        highestj = j;
                    }
                }
            }

            else {
                //5 digit
                char first[30];
                char last[30];
                for (int p=0;p<2;p++) {
                    first[p] = pStr[p];
                    last[p] = pStr[4-p];
                }
                if (strcmp(first,last) == 0) {
                    if (palindrome>highest) {
                        highest = palindrome;
                        highesti = i;
                        highestj = j;
                    }
                }
            }



        }
    }

    printf("%d, %d, %d", highest, highesti, highestj);

}
