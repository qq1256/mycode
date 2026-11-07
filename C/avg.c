#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;
    printf("please enter numbers (enter -1 to stop):");
    scanf("%d", &number);

    while (number != -1)
    {
        sum += number;
        count++;
        printf("please enter numbers (enter -1 to stop):");
        scanf("%d", &number);
    }
    printf("%.2f\n", 1.0*sum/count);

    return 0;
}