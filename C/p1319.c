#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int Matrix[N * N];
    int N_square = N * N;
    int mid;
    int num[40000];
    int count = 0;
    int status = 0;
    for (int i = 0; i < N_square; i += mid, count++) {
        scanf("%d", &mid);
        num[count] = mid;
    }
    int i = 0, j = 0;
    int cnt = 0;
    while (i < N * N) {
        if (cnt == num[j]) {
            status = !status;
            cnt = 0;
            j++;
        }
        if (status == 0) {
            Matrix[i] = 0;
        }
        if (status == 1) {
            Matrix[i] = 1;
        }
        cnt++;
        i++;
    }
    int count1 = 1;
    for (int i = 0; i < N * N; i++) {
        printf("%d", Matrix[i]);
        if (count1 == N) {
            printf("\n");
            count1 = 0;
        }
        count1++;
        
    }
    return 0;
}