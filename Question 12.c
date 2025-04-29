#include <stdbool.h>
#include <stdio.h>

int main(void) {
    long long int i = 1;
    long long int triangle = 0;
    bool continuing = true;
    while (continuing) {
        triangle += i;

        int divisors = 0;
        int divCurrent = 0;
        int div1 = 0;
        for (int j = 1; j<= triangle;j++) {
            if (triangle % j == 0) {
                divisors += 1;
                div1 = divCurrent;
                divCurrent = triangle % j;
                if (div1 * divCurrent == triangle) {
                    divisors = (divisors-1) * 2;
                    break;
                }

            }
        }

        if (divisors > 500) {
            printf("%lld",triangle);
            continuing = false;;
        }


        i++;
    }

    return 0;
}
