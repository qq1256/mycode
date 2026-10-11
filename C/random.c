#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number = rand() % 100 + 1;
    int count = 0;
    int a = 0;
    printf("%d\n", number);
    do {
        count++;
        printf("Guess the number between 1 and 100: ");
        scanf("%d", &a);
        if (a > number){
            printf("Try a smaller number!\n");
        }
        else if (a < number){
            printf("Try a bigger number!\n");
        }
    } while (a != number);
    printf("Correct!\n");
    printf("You guess %d times\n", count);
    return 0;
}