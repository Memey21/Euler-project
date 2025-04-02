#include <stdio.h>
#include <math.h>

int main(void) {
    for (int a=1;a<1000;a++) {
        for (int b=1;b<1000;b++) {
            double c = sqrt(a*a + b*b);
            if (c - (int)c == 0.0) {
                if (a + b + c == 1000) {
                    printf("%f\n",a*b*c);
                }

            }
        }
    }


    return 0;
}
