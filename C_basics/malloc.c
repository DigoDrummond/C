#include <stdio.h>
#include <stdlib.h>
// usado quando não se sabe quando espaço de memória será ocupado pelo programa
// malloc pede ao sistema operacional um bloco de memória, do tamanho especificado, em bytes
int main()
{
    // int x;
    // sizeof retorna quantidade de bytes de qualquer tipo de dados

    int *p = (int *)malloc(sizeof(int)); // pede ao Si espaço para variável inteira
    //(int *)para forçar que ponteiro retornado por malloc para a variável seja do tipo da variável

    if (p == NULL)
    {
        printf("Não há espaço disponível para alocar a variável!");
        return;
    }
    *p = 1000;        // escreve mil no espaço alocado
    printf("%d", *p); // se não inicializar valor para p printa lixo de memória

    free(p); // libera a memória ocupada pela locação, mas se algo foi escrito(atribuido) no espaço de memória, ele continua la. Nesse caso 1000;

    int *m = (int *)malloc(sizeof(int));//pode acabar recebendo valor escrito, que fica como lixo de memória



    return 0;
}