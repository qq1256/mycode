#include <stdio.h>

int main() {
    int k;
    int n;
    int i = 1;
    double sum = 0;
    scanf("%d", &k);
    while (sum <= k) {
        sum += 1.0/i;
        if (sum <= k){
            i++;
        }
    }
    printf("%d", i);

    return 0;
}