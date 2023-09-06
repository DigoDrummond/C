#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char str[], int esq, int dir)
{
    if (esq >= dir)
        return true;
    if (tolower(str[esq]) != tolower(str[dir]))
        return false;
    return isPalindrome(str, esq + 1, dir - 1);
}

bool isPalindromeHelper(char str[])
{
    int len = strlen(str);
    int esq = 0;
    int dir = len - 1;

    while (esq < dir)
    {
        while (esq < len && !isalpha(str[esq]))
        {
            esq++;
        }
        while (dir >= 0 && !isalpha(str[dir]))
        {
            dir--;
        }

        if (esq >= dir)
        {
            break;
        }

        if (str[esq] != str[dir])
        {
            return false;
        }

        esq++;
        dir--;
    }

    return true;
}

bool isFim(char str[])
{
    if (strlen(str) != 3)
        return false;
    char fim[] = {'F', 'I', 'M'};
    for (int i = 0; i < 3; i++)
    {
        if (str[i] != fim[i])
            return false;
    }
    return true;
}

int main()
{
    char str[100];
    while (!isFim(str))
    {
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';

        if (isFim(str))
            break;
        if (isPalindromeHelper(str))
            printf("SIM\n");
        else
            printf("NAO\n");
    }
    return 0;
}
