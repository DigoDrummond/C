#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    ->retorna ponteiro para nova região de memória
    ->se ponteiro for nulo ela aloca memória
    ->se novo tamanho for 0 a memória é liberada
    ->se não houver memória suficiente retorna null
*/

int main()
{

    int *vet, tam;

    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(tam * sizeof(int));

    if (vet == NULL)
    {
        printf("Erro ao alocar memoria");
        return 1;
    }
    for (int i = 0; i < tam; i++)
    {
        *(vet + i) = rand() % 100; // resto da divisão do numero por 100, numero entre 0 e 99
    }
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", *(vet + i));
    }

    scanf("%d", &tam);
    vet = realloc(vet, tam);

    printf("\nVetor Realocado\n");//novas posições possuem lixo de memória
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", *(vet + i));
    }

    free(vet);
    return 0;
}