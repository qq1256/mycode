#include <stdio.h>
int main() {
    int n;
    int k;
    int count = 0;
    int i = 0;
    scanf("%d %d", &n, &k);
    for ( ; n > 0; n--) {
        count++;
        if (count == k) {
            n++;
            count = 0;
        }
        i++;
    }
    printf("%d", i);

    return 0;
}