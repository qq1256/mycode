#include <stdio.h>

int main() {
    int l, m;
    scanf("%d %d", &l, &m);
    int u,v;
    int count,count1 = 0;
    int num[l];
    while (m > 0)
    {
        scanf("%d %d", &u, &v);
        m--;
        for (int i = u - 1; i < v; i++)
        {
            num[count] = i + 1;
            count++;
        }

    }
}