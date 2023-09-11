#include <stdio.h>

int main(){
    char strs[5][100];
    for (int i = 0; i < 5;i++)
        scanf("%s", &strs[i]);
    for (int i = 0; i < 5; i++)
        printf("%s\n", &strs[i]);
}