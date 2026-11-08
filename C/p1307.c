#include <stdio.h>
#include <math.h>
int len(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int main() {
    int N = 0;
    scanf("%d", &N);
    int sum = 0;
    int count = 0;
    if (N > 0) {
        int num = N;
        int N_len = len(num);
        int mid[N_len];
        for (int i = 0; i <= N_len; i++) {
            mid[i] = num % 10;
            num /= 10;
        }
        // 可以用reversed_N = reversed_N * 10 + digit
        // 数学方法更为简单
        for (int i = N_len - 1; i >= 0; i--)
        {
            sum += mid[i] * pow(10, count);
            count++;
        }
        printf("%d\n", sum);
        
    } 
    else if (N < 0) {
        int num = -N;
        int N_len = len(num);
        int mid[N_len];
        for (int i = 0; i <= N_len; i++) {
            mid[i] = num % 10;
            num /= 10;
        }
        for (int i = N_len - 1; i >= 0; i--)
        {
            sum += mid[i] * pow(10, count);
            count++;
        }
        printf("%d\n", -sum);
    }
    else {
        printf("0\n");
    }
    return 0;
}