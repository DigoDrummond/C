#include <stdio.h>


int main(){
    int n = 20;
    char str1[n];
    char str2[n];

    fgets(str1, sizeof(str1), stdin);
    int length = strlen(str1);
    str1[length - 1] = '\0';

    for (int i = 0; i < length;i++){
        str2[i] = str1[length - i - 1];
    }
    for (int i = 0; i < length; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");
    for (int i = 0; i < length; i++)
    {
        printf("%c", str2[i]);
    }
}