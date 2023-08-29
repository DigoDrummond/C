#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p = (int *)calloc(10, sizeof(int));//recebe dois argumentos, segundo é igual malloc(tamanho em bytes para alocar)
    //primeiro é um número inteiro positivo que informa quantos do segundo argumento devem ser alocados
    //10 espaços de memória de tamanho int
    //inicializa valor do endereço de memória como 0, não deixa lixo de memória

    *p = 10;//escreve no primeiro espaço
    *(p + 1) = 20;//escreve no segundo espaço

    printf("%d ", *p);
    printf("%d\n", p[1]);

    for (int i = 0; i < 10;i++){
        printf("Endereço de p%i = %p | Valor de p%i = %i\n", i, (p + i), i, *(p + i));
    }

        free(p);
}