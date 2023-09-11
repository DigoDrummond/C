#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
/*aça
acaçç
Ada
afç
aia
ala
ama*/

bool isFim(char str[])
{
    if (strlen(str) != 4) 
        return false;

    char fim[] = "FIM\n"; 

    for (int i = 0; i < 4; i++)
    {
        if (str[i] != fim[i])
            return false;
    }

    return true;
}

int main()
{
    srand(4);
    char str[100];
    while (!isFim(str))
    {
        fgets(str, sizeof(str), stdin);
        if (isFim(str))
            break;
        else{
            int numAleatorio = rand() % 26;
            char letra1 = 'a' + numAleatorio;
            char letra2 = 'a' + numAleatorio;

            for (int i = 0; i < strlen(str); i++)
            {
                if (str[i] == letra1)
                    str[i] = letra2;
            }
            printf("%s", str);
        }
    }
}