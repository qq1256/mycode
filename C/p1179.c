#include <stdio.h>
int num_len(int num);

int main() {
    int L, R;
    int count = 0;
    scanf("%d %d", &L, &R);
    while (L <= R) {
        int length = num_len(L);
        int dig = L;
        for (int i = 0; i < length; i++) {
            if (dig % 10 == 2) {
                count++;
            }
            dig /= 10;
        }
        L++;
    }
    printf("%d\n", count);
    return 0;
}

int num_len(int num) {
    int length = 0;
    for (; num > 0; num /= 10) {
        length++;
    }
    return length;
}