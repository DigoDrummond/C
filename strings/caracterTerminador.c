#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 100;
    char vet[n];
    int i=0;
    fgets(vet, sizeof(vet), stdin);

    while(vet[i]!= '\0'){
        i++;
    }

        printf("Numero de caracteres: %d", i-1);
}