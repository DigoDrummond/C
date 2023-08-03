#include <iostream>

using namespace std;

class Math{
    private:
        float addition(int numbers[], int size){
            float result = 0.0;
            for (int i = 0; i < size; i++)
                result += numbers[i];
            return result;
        }
        float subtraction(int numbers[], int size){
            float result = numbers[0];
            for (int i = 1; i < size; i++)
                result -= numbers[i];
            return result;
        }
        float multiplication(int numbers[], int size){
            float result = 1.0;
            for (int i = 0; i < size; i++)
                result *= numbers[i];
            return result;
        }
        float division(int numbers[], int size){
            float result = numbers[0];
            for (int i = 1; i < size; i++)
                if(numbers[i] != 0)
                result /= numbers[i];
                else{
                cout << "Error! Division by 0!\n";
                return 0;
                }
            return result;
        }
    public:
        float getAddition(int numbers[], int size){
            return addition(numbers, size);
        }
        float getSubtrction(int numbers[], int size){
            return subtraction(numbers, size);
        }
        float getMultiplication(int numbers[], int size){
            return multiplication(numbers, size);
        }
        float getDivision(int numbers[], int size){
            return division(numbers, size);
        }

};

int main(){
        int size, choice;
        cout << "How many numbers you're gonna use? \n";
        cin >> size;
        int numbers[size];
        for (int i = 0; i < size; i++){
            cout << "Enter number " << i + 1 << ": ";
            cin >> numbers[i];
        }
        float result = 0.0;
        Math math;
        cout << "<-- Menu -->";
        cout << "\n1-Add numbers.\n2-Subtract numbers\n3-Multiply numbers.\n4-Divide numbers\n5-CLose program.\n";
        cout << "Select an option: ";
        cin >> choice;

        if(choice == 1)
            result = math.getAddition(numbers, size);
        if(choice == 2)
            result = math.getSubtrction(numbers, size);
        if(choice == 3)
            result = math.getMultiplication(numbers, size);
        if(choice == 4)
            result = math.getDivision(numbers, size);
        if(choice == 5)
            return 0;
        if(choice < 1 || choice > 4){
            cout <<"Invalid option!";
            return 1;
        }
        cout << "Result: " << result;

        return 0;
}