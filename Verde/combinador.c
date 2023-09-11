#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50];
    char str2[50];
    scanf("%s %s", str1, str2);
    int i = 0;
    int j = 0;
    int k = 0;
    char resultado[strlen(str1) + strlen(str2)];
    while (i < strlen(str1) || j < strlen(str2))
    {
        if (i < strlen(str1))
            resultado[k++] = str1[i++];
        if (j < strlen(str2))
            resultado[k++] = str2[j++];
    }
    resultado[k] = '\0';
    for (int i = 0; i < strlen(resultado); i++)
    {
        printf("%c", resultado[i]);
    }
    printf("\n");
}