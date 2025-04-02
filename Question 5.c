#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int number = 1;
    while (true){
        bool didWin = true;
        for (int i=1;i<=20;i++) {
            if (number%i != 0) {
                didWin = false;
            }
        }

        if (didWin == true) {
            break;
        }
        number++;
    }
    printf("%d", number);
}
