// receives an array of integers and gives the highest and the smallest one.

#include <stdio.h>

const int n = 5;

void highest_and_smallest(int array[], int n, int *highest, int *smallest);

int main()
{
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%i", &array[i]);
    }
    int highest, smallest;
    highest_and_smallest(array, n, &highest, &smallest);

    printf("\nHighest number on the array: %d\n", highest);
    printf("Smallest number on the array: %d", smallest);
}
void highest_and_smallest(int array[], int n, int *highest, int *smallest){
    // initialize variables to hold values
    *highest = array[0];
    *smallest = array[0];
    for (int i = 0; i < n; i++)
        if (*highest < array[i])
            *highest = array[i];
        else if (*smallest > array[i])
            *smallest = array[i];
}
