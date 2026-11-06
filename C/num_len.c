#include <stdio.h>
int num_len(int num) {
    int length = 0;
    for (; num > 0; num /= 10) {
        length++;
    }
    return length;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int length = num_len(number);
    printf("The number of digits in %d is: %d\n", number, length);
    return 0;
}