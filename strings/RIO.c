#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isRIO(char str[])
{
    char c[] = {'R', 'I', 'O', '\0'};

    for(int i = 0, j = strlen(str) - 3; i < 3; i++, j++)
    {
        if (c[i] != str[j])
            return false;
    }
    return true;
}

int main()
{
    char str[100];
    scanf("%s", str);

    if(isRIO(str))
        printf("SIM");
    else
        printf("NAO");
}