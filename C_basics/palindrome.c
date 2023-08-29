#include <stdio.h>

int isPalindrome(char str[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            return 0; // Não é um palíndromo
        }
    }
    return 1; // É um palíndromo
}

int customStrlen(const char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

void customStrcpy(char destino[], const char origem[])
{
    int i = 0;
    while (origem[i] != '\0')
    {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
}

int customStrcmp(const char str1[], const char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] < str2[i])
        {
            return -1;
        }
        else if (str1[i] > str2[i])
        {
            return 1;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else if (str1[i] == '\0')
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char str[100];
    int n;

    do
    {
        fgets(str, sizeof(str), stdin); // Lê a linha inteira
        n = customStrlen(str);
        if (n > 0 && str[n - 1] == '\n')
        {
            str[n - 1] = '\0'; // Remove a quebra de linha lida por fgets
            n--;
        }

        if (customStrcmp(str, "FIM") == 0)
        {
            break;
        }

        if (isPalindrome(str, n))
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    } while (1);

    return 0;
}
