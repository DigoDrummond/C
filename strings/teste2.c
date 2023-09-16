#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int changes(char str1[], char str2[])
{
    int length1 = strlen(str1);
    int count = 0;

    for (int i = 0; i < length1; i++)
    {
        int ascii = str2[i] - str1[i];
        if (ascii < 0)
        {
            ascii += 26;
        }
        count+= ascii;
    }
    return count;
}

int main()
{
    char strA[100];
    char strB[100];
    int n;
    scanf("%d", &n);
    char c = getchar();
    while(c!=EOF){
        scanf("%s", strA);
        scanf("%s", strB);

        int resul = changes(strA, strB);
        printf("%d\n", resul);
    }
}