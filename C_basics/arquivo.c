#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char filename[] = "verde.txt";
    int n;

    file = fopen(filename, "w");
    if (file == NULL)
    {
        return 1;
    }

    
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++)
    {
        float numero;
        scanf("%f", &numero);
        fprintf(file, "%.2f", numero);
    }

    fclose(file);

    
    file = fopen(filename, "r");
    if (file == NULL)
    {
        return 1;
    }

    fseek(file, 0, SEEK_END);      
    long int tamanho = ftell(file); 

    for (long int i = tamanho - 1; i >= 0; i--)
    {
        fseek(file, i, SEEK_SET);        
        char linha[50];                    
        fgets(linha, sizeof(linha), file); 
        printf("%s", linha);               
    }
    fclose(file);

    return 0;
}
