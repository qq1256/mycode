#include <stdio.h>

int main() {
    int l, m;
    scanf("%d %d", &l, & m);

    int tree[10001] = {0};

    /* 0 到 l 都有树 */
    for (int i = 0; i <= l; i++) {
        tree[i] = 1;
    }

    /* 移走树 */
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        for (int j = u; j <= v; j++) {
            tree[j] = 0;
        }
    }

    /* 统计剩下的树 */
    int ans = 0;
    for (int i = 0; i <= l; i++) {
        if (tree[i] == 1) {
            ans++;
        }
    }

    printf("%d\n", ans);
    return 0;
}