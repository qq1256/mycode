#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int height[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        height[i] = num;
    }
    // 将外层 for 循环改为 while，方便我们自己控制 i 的跳转
    int i = 1;
    while (i < n - 1) {
        if (height[i - 1] > height[i]) {
        // 内部向前看，直到找到不等于当前值的数
        while (height[i + 1] == height[i] && i < n - 1) {
            i++; 
        }
        // 跳出内层循环后，判断右边是否大于它
        if (height[i + 1] > height[i]) {
            count++;
        }
    }
    // 普通地往前走一步
    i++;
}
    printf("%d", count);
    return 0;
}