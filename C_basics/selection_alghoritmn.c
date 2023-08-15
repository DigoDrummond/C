#include <stdio.h>

void swap(int a, int b, int array[])
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

int main()
{
    int n = 10;
    int array[] = {2, 3, 6, 9, 4, 5, 7, 9, 2, 10};
    int count = 0;
    for (int i = 0; i < (n - 1); i++){
        int menor = i;
        for (int j = (i + 1); j < n; j++){
            count++;
            if (array[menor] > array[j])
                menor = j;
        }
        swap(menor, i,array);
    }
    printf("%d", count);
}