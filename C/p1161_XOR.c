#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    unsigned int ans = 0; // 用 unsigned int 避免符号位干扰，初始为 0

    for (int i = 0; i < n; i++) {
        double a;
        int t;
        scanf("%lf %d", &a, &t);

        for (int j = 1; j <= t; j++) {
            // 核心：直接异或，不需要数组
            // 加上 1e-8 解决浮点数精度问题（向下取整）
            ans ^= (unsigned int)(a * j + 1e-8); 
        }
    }

    printf("%u\n", ans);
    return 0;
}