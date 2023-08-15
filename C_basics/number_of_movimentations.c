#include <stdio.h>

void swap(int a, int b, int array[])
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

int main()
{
    int n = 5;
    int array[] = {1, 2, 3, 4, 5};
    float teoria = (3 * n - 3);
    int mov = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        int menor = i;
        for (int j = (i + 1); j < n; j++)
        {
            if (array[menor] > array[j])
            {
                menor = j;
            }
        }
        swap(menor, i, array);
        mov += 3;
    }
    printf("Teoria: %f\n", teoria);
    printf("Prática: %d\n", mov);
    return 0;
}
