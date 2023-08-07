#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
//const int max_patients = 10;

typedef struct{
    int day;
    int month;
    int year;
}Birth;

typedef struct{
    char name[100];
    int age;
    char doctors_name[100];
    char sex[100];
    Birth date;
}Patient;

void registerPacient(Patient patients[],int *patientsNum);
void showPacients(Patient patients[], int patientsNum);
void showByName(Patient patients[], int patientsNum);
void excludePacient(Patient patients[], int *patientsNum, char *patientName);
void excludeByDoctor(Patient patients[], int patientsNum);
int compareNames(const int *a, const int *b);//used on showByName

int main(){
    setlocale(LC_ALL, "");
    Patient patients[10];
    int numPatients=0;//number of registered patiens
    int option;

}
void registerPacient(Patient patients[], int *patientsNum){
    if(*patientsNum > 10){
        printf("You can only register 10 patients");
        return;
    }
    Patient newPatient;
    printf("    Patients Register       ");
    printf("\nName: ");
    scanf(" %[^\n]s", &newPatient.name);
    printf("\nAge: ");
    scanf("%d",&newPatient.age );
    printf("\nSex: ");
    scanf(" %c", &newPatient.sex);
    printf("Doctor name: ");
    scanf(" %[^\n]",&newPatient.doctors_name);
    printf("    Birth   ");
    printf("\nDay: ");
    scanf("%d", &newPatient.date.day);
    printf("\nMonth: ");
    scanf("%d", &newPatient.date.month);
    printf("\nYear: ");
    scanf("%d", &newPatient.date.year);
    patients[*patientsNum] = newPatient;
    (*patientsNum)++;
    printf("\nSucess!\n");
}
void showPacients(Patient patients[], int patientsNum){
    if(patientsNum == 0){
        printf("There are no patient in the system\n");
        return;
    }
    printf("    Registered Patients     ");
    for (int i = 0; i <patientsNum ; ++i){
        printf("\nName: %s", patients[i].name);
        printf("\nAge: %d", patients[i].age);
        printf("\nSex: %s", patients[i].sex);
        printf("\nDate of birth: %d/%d/%d", patients[i].date.month, patients[i].date.day, patients[i].date.year);
        printf("\nDoctor name: %s\n", patients[i].doctors_name);
    }
}
void showByName(Patient patients[], int patientsNum){
    if(patientsNum == 0){
        printf("There are no patients in the system");
        return;
    }
    Patient ordenedPatients[10];
    memcpy(ordenedPatients, patients, sizeof(Patient) * patientsNum);
    qsort(ordenedPatients, patientsNum, sizeof(Patient), compareNames);
    showPacients(ordenedPatients, patientsNum);
}
int compareNames(const int *a, const int *b){//function used by QSORT
    Patient *patientA = (Patient *)a;// a and b are converted to Patient pointers
    Patient *patientB = (Patient *)b;

    return strcmp(patientA->name, patientB->name);//access the struct using ->
    //if strcmp returns a negative value, then patientA comes before patientB, positive return is the opposite
}
void excludePacient(Patient patients[], int *patientsNum, char *patientName){
    int found = 0;
    for (int i = 0; i < *patientsNum;i++){
        if(strcmp(patients[i].name, patientName) == 0){
            found = 1;
            for (int j = i; j < *patientsNum - 1; j++){
                patients[j] = patients[j + 1];
            }
            (*patientsNum)--;
            printf("Patient excluded with sucess!.\n");
            break;
        }
    }
}
void excludeByDoctor(Patient patients[], int patientsNum){
    
}
