#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - 1 - i])
            return 0; // Não é um palíndromo
    }
    return 1; // É um palíndromo
}

int main()
{
    char str[100];
    int n;

    do
    {
        fgets(str, sizeof(str), stdin); // Lê a linha inteira
        n = strlen(str);
        if (n > 0 && str[n - 1] == '\n')
        {
            str[n - 1] = '\0'; // Remove a quebra de linha lida por fgets
            n--;
        }

        if (strcmp(str, "FIM") == 0)
            break;

        if (isPalindrome(str, n))
            printf("SIM\n");
        else
            printf("NAO\n");
    } while (1);

    return 0;
}
