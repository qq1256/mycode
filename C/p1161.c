#include <stdio.h>
char num[2000000];
int main() {
    int n;
    for (int i = 0; i < 2000000; i++) {
        num[i] = 0;
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        double a;
        int t;
        int result = 0;
        scanf("%lf %d", &a, &t);
        for (int j = 0; j < t; j++) {
            result = (int)(a * (j + 1));
            if (num[result] == 0) {
                num[result] = 1;
            } else {
                num[result] = 0;
            }
        }
    }
    for (int k = 0; k < 2000000; k++) {
        if (num[k] == 1) {
            printf("%d\n", k);
        }
    }

    return 0;
}