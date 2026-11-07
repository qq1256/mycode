#include <stdio.h>
int main() {
    int budget;
    int total = 0;
    const int money = 300;
    int total_money = 0;
    for (int i = 1; i < 13; i++) {
        scanf("%d", &budget);
        total = total + money - budget;
        if (total >= 100) {
            int num = total / 100;
            total = total - num * 100;
            total_money = total_money + num * 100;
        }
        if (total < 0) {
            printf("-%d\n", i);
            break;
        }
    }
    if (total >= 0) {
        //printf("%d\n", (int)(total_money * 1.2 + total)); 这样可能有浮点数计算风险
        printf("%d\n", total_money + total_money / 5 + total); // 这样就避免了这个问题
    }
    return 0;
}