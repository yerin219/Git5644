#include <stdio.h>

int main(void) {

    const int MAX_NUM = 100;

    for (int i = 1; i <= MAX_NUM; i += 2) {

        printf("%d ", i);

    }

    printf("\n");


for (int i = 2; i <= MAX_NUM; i += 2) {

        printf("%d ", i);

    }

    printf("\n");


    for (int num = 2; num <= MAX_NUM; num++) {

        int isPrime = 1; 

        for (int j = 2; j * j <= num; j++) {

            if (num % j == 0) {

                isPrime = 0;

                break;

            }

        }

        if (isPrime) {

            printf("%d ", num);

        }

    }

    printf("\n");

return 0;

}

















