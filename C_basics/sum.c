#include <stdio.h>
#include <stdlib.h>



int main(){
    int n = 6;
    int s = sum(n);
    printf("%d", s);
    return 0;
}

int sum(int size){
    //simplest case sum(0), base case
        if(size == 0)
        return 0;
        else
        return sum(size - 1) + size;
}