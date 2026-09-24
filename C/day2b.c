#include <stdio.h>
int main()
{
    double ce, fa;
    printf("请输入摄氏度：");
    scanf("%lf", &ce);
    fa = ce * 1.8 + 32;
    printf("对应的华氏度为：%.2f\n", fa);
}