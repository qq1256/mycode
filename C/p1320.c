#include <stdio.h>
#include <string.h>

// N的最大值为200，所以点阵和压缩码的数组大小设为 200 即可满足安全范围
char grid[205][205]; 
int res[40005];      // 压缩码最大长度为 200*200 = 40000

int main() {
    int n = 0;
    
    // 1. 逐行读取输入，直到文件末尾(EOF)
    while (scanf("%s", grid[n]) != EOF) {
        if (strlen(grid[n]) > 0) {
            n++;
        }
    }
    
    // 边界情况：如果没有有效输入则直接退出
    if (n == 0) {
        return 0;
    }

    // 2. 遍历点阵生成压缩码
    char expect = '0'; // 从统计 0 的个数开始
    int count = 0;
    int res_len = 0;
    
    for (int i = 0; i < n; i++) {
        int len = strlen(grid[i]);
        for (int j = 0; j < len; j++) {
            char current = grid[i][j];
            
            if (current == expect) {
                count++; // 继续累加当前期望字符的连续个数
            } else {
                res[res_len++] = count; // 前一个连续段落结束，记录个数
                
                expect = (expect == '0') ? '1' : '0'; // 切换期望字符
                count = 1; // 当前字符是新段落的第一个，重置计数器为 1
            }
        }
    }
    // 别忘了记录最后一段连续序列的个数
    res[res_len++] = count;
    
    // 3. 按照格式输出：先输出 N，再输出压缩码数字
    printf("%d", n);
    for (int i = 0; i < res_len; i++) {
        printf(" %d", res[i]);
    }
    printf("\n");
    
    return 0;
}