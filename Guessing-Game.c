#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
srand(time(0));
    int number1 = (rand() % 100) + 1;
    int num,k;
    printf("******* Guessing Game! *******\n");
    printf("Pick a number from 1-100\n");
    do {
        scanf("%d",&num);

        if(number1 > num){
            printf("Too little!\n");
            fflush(stdin);
        }
        if(number1 < num){
            printf("Too much!\n");
            fflush(stdin);
        }
        if (number1 == num){
            printf("| Correct! Guessed number is: %d |",number1);
            fflush(stdin);
        }
    } while (num != number1);


    return 0;
}
