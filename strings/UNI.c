#include <stdio.h>
#include <stdbool.h>

bool isUNI(char c[])
{
    char uni[] = {'U', 'N', 'I', '\0'};
    for (int i = 0; i <3; i++)
    {
        if (c[i] != uni[i])
            return false;
    }
    return true;
}

int main()
{
    char str[100];
    scanf("%s", str);
    if (isUNI(str))
    {
        printf("SIM");
    }
    else
        printf("NAO");
}
