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
    for (int i = 1; i < n - 1; i++) { // 使用了goto，会使得逻辑很绕
        if (height[i - 1] > height[i]) {
            a:
            if (height[i + 1] > height[i]) {
                count++;
            }
            else if (height[i] == height[i + 1]) {
                i++;
                goto a;
            }

        }
    }
    printf("%d", count);
    return 0;
}