#include <stdio.h>

int main(void) {

    long long int sum = 0;
    FILE *numbers;
    numbers = fopen("numberss.txt", "r");
    char numberString[101];
    char newString[15];

    while (fgets(numberString, 101, numbers)) {

        printf("%s\n", numberString);

        for (int i=0; i<14; i++) {
            newString[i] = numberString[i];
        }
        printf("%s\n\n", newString);
        sum += (long long int) newString;
    }

    fclose(numbers);

    printf("%lld", sum);
    return 0;
}

//2010319412
//5350353422
//1057520352