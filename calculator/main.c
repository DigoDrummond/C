#include <stdio.h>
#include <math.h>


int main(){
    int size, choice;
    float sum = 0.0;
    printf("How many numbers you're gonna use? ");
    scanf("%d", &size);
    int numbers[size];
    for (int i = 0 ;i < size; i++){
        printf("\nEnter number %d: ", i+1 );
        scanf("%d", &numbers[i]);
    }
    printf("<-- Menu -->\n");
    printf("1-Add numbers.\n2-Subtract numbers.\n3-Multiply numbers.\n4-Divide numbers.5-Close program\n");
    printf("Choose an option: ");
    scanf("%d", &choice);
    if(choice == 1){
        for (int i = 0; i < size; i++)
            sum += numbers[i];
    }
    if(choice == 2){
        sum = numbers[0];
        for (int i = 1; i < size; i++)
            sum -= numbers[i];
    }
    if(choice == 3){
        sum = 1;
        for (int i = 0; i < size; i++)
            sum *= numbers[i];
    }
    if(choice == 4){
        sum = numbers[0];
        for (int i = 1; i < size; i++){
            if(numbers[i] != 0 )
                sum /= numbers[i];
            else{
                printf("You can't divide a number by 0");
                return 1;
            }    
        }    
    }
    if(choice == 5){
        return 0;
    }
    if(choice < 0 || choice > 5)
        printf("Invalid Option!");

    printf("Result: %.2f\n", sum);

    return 0;
}

