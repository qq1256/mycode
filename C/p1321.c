#include <stdio.h>
int main() {
    int boy_num = 0, girl_num = 0;
    char l[255];
    int i = 0;
    while (scanf("%c", &l[i]) == 1) {
        i++;
    }
    for (int j = 0; j < i; j++) {
        if (l[j] == 'g') {
            girl_num++;
            if (l[j + 1] == 'i') {
                j++;
                if (l[j + 1] == 'r') {
                    j++;
                    if (l[j + 1] == 'l') {
                        j++;
                    }
                }
            }   
        }
        else if (l[j] == 'i') {
            girl_num++;
            if (l[j + 1] == 'r') {
                j++;
                if (l[j + 1] == 'l') {
                    j++;
                }
            } 
        }
        else if (l[j] == 'r') {
            girl_num++;
            if (l[j + 1] == 'l') {
                j++;
            }
        }
        else if (l[j] == 'l') {
           girl_num++;
        }
        
        if (l[j] == 'b') {
            boy_num++;
            if (l[j + 1] == 'o') {
                j++;
                if (l[j + 1] == 'y') {
                    j++;
                }
            }
        }
        else if (l[j] == 'o') {
            boy_num++;
            if (l[j + 1] == 'y') {
                j++;
            }
        }
        else if (l[j] == 'y') {
            boy_num++;
        }
        
    
    }
    printf("%d\n", boy_num);
    printf("%d\n", girl_num);
    return 0;
}