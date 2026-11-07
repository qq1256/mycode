#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    int num[n];
    int another_num[n-1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        another_num[i] = i + 1;
    }
    for (int i = 0; i < n - 1; i++) {
        int mid = abs(num[i] - num[i+1]);
        for (int j = 0; j < n - 1; j++) {
            if (mid == another_num[j]) {
                count++;
            }
        }
    }
    if (count == n - 1) {
        printf("Jolly\n");
    } else {
        printf("Not jolly\n");
    }
    return 0;
}