#include <stdio.h>
#include <stdlib.h>
int main() {
    int number;
    int *a;
    scanf("%d", number);
    //int a[number] C99 only
    a = (int*)malloc(number * sizeof(int));
    for (int i = 0; i < number; i++) {
        scanf("%d", &a[i]);
    }
    free(a);
    return 0;
}