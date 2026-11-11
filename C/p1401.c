#include <stdio.h>

int main() {
    long long xl, xu, yl, yu;
    scanf("%lld %lld", &xl, &xu);
    scanf("%lld %lld", &yl, &yu);

    long long p1 = xl * yl;
    long long p2 = xl * yu;
    long long p3 = xu * yl;
    long long p4 = xu * yu;

    long long mn = p1;
    if (p2 < mn) mn = p2;
    if (p3 < mn) mn = p3;
    if (p4 < mn) mn = p4;

    long long mx = p1;
    if (p2 > mx) mx = p2;
    if (p3 > mx) mx = p3;
    if (p4 > mx) mx = p4;

    if (mn < -2147483648LL || mx > 2147483647LL) {
        printf("long long int\n");
    } else {
        printf("int\n");
    }

    return 0;
}