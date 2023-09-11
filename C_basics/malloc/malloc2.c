#include <stdio.h>
#include <stdlib.h>


// malloc retorna ponteiro para região da memória alocada ou NULL

int main()
{
    int *x;
    x = (int *)malloc(sizeof(int));

    char *y;
    y = calloc(1, sizeof(char));

    if(x == NULL){
        printf("Erro na alocaçao de memoria\n");
        return 1;
    }
    printf("Memória alocada com sucesso!\n");
    *x = 50;
    printf("x: %d\n", x);
    printf("x: %d\n", *x);

    *y = 'a';

    printf("y: %d\n", y);
    printf("y: %c\n", *y);

    return 0;
}