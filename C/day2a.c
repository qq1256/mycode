#include <stdio.h>
int main() {
    int a, b;
    printf("请输入两个整数（用空格隔开）: ");
    scanf("%d %d", &a, &b);
    
    printf("和: %d\n", a + b);
    printf("差: %d\n", a - b);
    printf("积: %d\n", a * b);
    printf("商: %d\n", a / b);
    printf("余: %d\n", a % b);
    
    return 0;
}