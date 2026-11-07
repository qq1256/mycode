#include <stdio.h>
#include <string.h>

int main() {
    char comet[10];
    char team[10];
    long long sum1 = 1, sum2 = 1;
    const int number = 64;
    scanf("%s", comet);
    scanf("%s", team);
    int comet_len = strlen(comet);
    int team_len = strlen(team);
    for (int i = 0; i < comet_len; i++) {
        sum1 *= comet[i] - number;
    }
    for (int i = 0; i < team_len; i++) {
        sum2 *= team[i] - number;
    }

    if (sum1 % 47 == sum2 % 47) {
        printf("GO\n");
    } else {
        printf("STAY\n");
    }

    return 0;
}