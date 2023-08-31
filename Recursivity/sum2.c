#include <stdio.h>
const int n = 3;
int main()
{
    
}
int sum(int array[], int n){
    if( n==0)
        return 0;
        else
        array[n - 1] + sum(array, n - 1);
}