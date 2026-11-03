#include <stdio.h>
int main() {
    int K;
    int num[20001];
    int sub1, sub2, sub3;
    int count = 0;
    for (int i = 0; i < 20001; i++) {
        num[i] = i + 10000;
    }
    scanf("%d", &K);
    if (K == 1){
        for (int i = 0; i < 20001; i++) {
            printf("%d\n", num[i]);
            count++;
        }
    } 
    else{
        for (int j = 0; j < 20001; j++) {
            int a, b, c, d, e; 
            int num_val = num[j];
            e = num_val % 10;
            d = (num_val / 10) % 10;
            c = (num_val / 100) % 10;
            b = (num_val / 1000) % 10;
            a = (num_val / 10000) % 10;
            sub1 = a * 100 + b * 10 + c;
            sub2 = b * 100 + c * 10 + d;
            sub3 = c * 100 + d * 10 + e;
            if (sub1 %K == 0 && sub2 %K == 0 && sub3 %K == 0) {
                printf("%d\n", num_val);
                count++;
            }
        }
    }
    if (count == 0) {
        printf("No\n");
    }
    return 0;
}