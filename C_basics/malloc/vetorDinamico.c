#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int *vet, tam;

    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(tam * sizeof(int));

    if(vet == NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }
    for (int i = 0; i < tam;i++){
        *(vet + i) = rand() % 100;//resto da divisão do numero por 100, numero entre 0 e 99
    }
    for (int i = 0; i < tam;i++){
        printf("%d\n", *(vet + i));
    }

    free(vet);
    return 0;
}