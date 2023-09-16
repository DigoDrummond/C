#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int contaDigitos(char str[]){
    char c[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    int count = 0;

    for(int i = 0; i < strlen(str);i++){
            if (str[i] == c[i])
                count++;
        }      
    return count;
}

int main(){
    char str[100];
    scanf("%s", str);
    int count = contaDigitos(str);
    printf("Numero de digitos na string: %d", count);
}