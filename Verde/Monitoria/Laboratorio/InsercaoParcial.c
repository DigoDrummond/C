// k primeiros elementos são ordenados normalmente
// para os demais elementos, se algum for menor que o valor da k-esima posição, ele será inserido no conjunto
// já ordenado. Caso contrário descartado

#include <stdio.h>

int main()
{
    int n = 100;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 101;
    }
    printf("Original Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
    insercaoParcial(array, n-1,3);

    printf("Ordered Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }
}

void insercaoParcial(int array[], int n, int k)
{
    for (int i = 1; i < n - 1; i++)
    {
        int tmp = array[i];
        int j = (i < k) ? i - 1 : k - 1;
        while ((j >= 0) && (array[j] > tmp))
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = tmp;
    }
}