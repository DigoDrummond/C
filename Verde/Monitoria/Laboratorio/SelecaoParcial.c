#include <stdio.h>

//Dado um array com n elementos, desejamos que os k primeiros(menores) elementos fiquem ordenados
/*
ORDENAÇÃO PARCIAL -> útil para filtragem de dados, exemplo mostrar 3 páginas ao invés de 100, como google
quando é desnecessário ordenar todos os dados, só precisa de uma parte deles


*/
int main(){
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
    selecaoParcial(array, 3, n - 1);

    printf("Ordered Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }
}

void selecaoParcial(int array[],int k,int n){
    for (int i = 0; i < k;i++){
        int menor = i;
        for (int j = (i + 1); j < n;j++){
            if(array[menor] > array[j])
                menor = j;
        }
        swap(array,menor, i);
    }
}
void swap(int array[], int menor, int i){
    int temp = array[i];
    array[i] = array[menor];
    array[menor] = temp;
}