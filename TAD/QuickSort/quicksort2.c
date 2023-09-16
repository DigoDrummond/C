#include <stdio.h>
#include <stdlib.h>

void quicksort(int array[], int esq, int dir);
void swap(int array[], int i, int j);

int main()
{
    int n = 16;
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
    quicksort(array, 0, n - 1);

    printf("Ordered Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }
}

void quicksort(int array[], int esq, int dir)
{
    int i = esq, j = dir, pivo = array[(dir + esq) / 2];
    while (i <= j)
    {
        while (array[i] < pivo)
            i++;
        while (array[j] > pivo)
            j--;
        if (i <= j)
        {
            swap(array, i, j);
            i++;
            j--;
        }
    }
    if (esq < i){
        printf("\n");
        for (int i = 0; i < dir;i++){
            printf("%d, ", array[i]);
        }
        printf("\n");
        quicksort(array, esq, j);
    }
    if (i < dir){
            printf("\n");
            for (int i = 0; i < dir; i++)
            {
            printf("%d, ", array[i]);
            }
            printf("\n");
            quicksort(array, i, dir);
    }    
}
void swap(int array[], int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}