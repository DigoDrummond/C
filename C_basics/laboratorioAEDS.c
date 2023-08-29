#include <stdio.h>
#include <stdlib.h>

typedef struct Vetor
{
    int *v, n, nVals;
} Vetor;

Vetor *Alocar(int n)
{
    Vetor *array;
    array = (Vetor *)malloc(sizeof(Vetor));
    if (array == NULL)
        return NULL;
    array->nVals = 0;
    array->n = n;
    return array;
}

void Preencher(Vetor *array, int num)
{
    array->nVals = 0;
    int *val = array->v;
    for (int i = 0; i < array->n; i++)
    {
        val[i] = num;
        array->nVals++;
    }
}

void Inserir(Vetor *array,int num, int i)
{
    if (i > array->n)
    {
        array = (Vetor *)realloc(array, sizeof(Vetor));
        array->n++;
    }
    for (int j = array->n ; j >= i; j--)
    {
        array->v[j] = array->v[i - 1];
    }
    array->v[i] = num;
    array->nVals++;
}

int Mostrar(Vetor *array, int position)
{
    if (position >= 0 && position <= array->n)
        return array->v[position];
    else
        return -1;
}

void Apagar(Vetor *array)
{
    free(array);
}
void Imprime(Vetor *array)
{
    for (int i = 0; i < array->n; ++i)
    {
        printf("%d ", array->v[i]);
    }
    printf("\n");
}
int Encontrar(Vetor *array, int search)
{
    for (int i = 0; i < array->n; i++)
    {
        if (array->v[i] == search)
            return i;
    }
    return -1;
}
int main(void)
{
    Vetor *array = Alocar(5);
    if (array == NULL)
        return 1;
    Preencher(array, 10);
    Inserir(array, 99,2);

    int elemento = Mostrar(array, 2);
    if (elemento != -1)
    {
        printf("Elemento na posicao %d: %d\n", 2, elemento);
    }
    else
    {
        printf("Posição %d inválida.\n", 2);
    }

    int idx = Encontrar(array, 99);

    if (idx != -1)
        printf("Elemento 99 encontrado no indice %d\n", idx);
    else
        printf("Elemento 99 não encontrado\n");

    Apagar(array);
    return 0;
}
