#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, i, j, length, length_long;
    int count = 0;
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    scanf("%d", &length);
    int numbers[10] = {a, b, c, d, e, f, g, h, i, j};
    length_long = length + 30;
    // printf("Length: %d\n", length_long);
    for (i = 0; i < 10; i++)
    {
        if (length_long >= numbers[i])
        {
            count++;
        }
        
    }
    printf("%d", count);
    return 0;
}