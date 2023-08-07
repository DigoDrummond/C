
//receives an array of integers and a integer x , return a boolean value informing if the element x is on the array

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool search(int array[], int n, int s);

int main(){
    int n, s;
    printf("Number of numbers on the array: ");
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++){
        printf("Type number %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Type a number to see if its on th array: ");
    scanf("%d", &s);

    bool result = search(array, n, s);

    if(result)
        printf("Number %d is on the array!", s);
    else
        printf("Number not found!");
}


bool search(int array[], int n, int s){
    for (int i = 0; i < n; i++){
        if(array[i] == s)
            return true;
    }
    return false;
}



