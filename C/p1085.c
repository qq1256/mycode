#include <stdio.h>
int main()
{
    int school_time, extra_time, total_time;
    int num[7];
    int day = 0;
    int count = 0;
    int max = 0;
    for (int i = 0; i < 7; i++)
    {
        scanf("%d %d", &school_time, &extra_time);
        total_time = school_time + extra_time;
        num[i] = total_time;
    }
    for (int i = 0; i < 7; i++)
    {
        if (num[i] > 8)
        {
            if (max < num[i])
            {
                max = num[i];
                day = i + 1;
            }
        }
    }
    printf("%d\n", day);
    return 0;
}
