#include<stdio.h>

struct Employee {

    int ID;
    char name[64];
    int age;

};

void addEmployee(struct Employee *EmployeeList, int *numEmployees);
void displayEmployee(struct Employee *Employee_ptr);

int main()
{
    struct Employee EmployeeList[100];
    int choice, numEmployees = 0;

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            addEmployee(EmployeeList, &numEmployees);
        }

        if (choice == 2) {

        }

        if (choice == 3) {

            struct Employee *Employee_ptr = EmployeeList;

            if (numEmployees == 0) {
                printf("No Employees Added");
            }


            for (int i = 0; i < numEmployees; i++) {
                printf("\nEmploy  %d:", i+ 1);
                displayEmployee(Employee_ptr + i);
            }



        }
    }
}

void addEmployee(struct Employee *EmployeeList, int *numEmployees)
{
    if ( *numEmployees > 100 ) {
        printf("Limit exceeded");
        return;
    }

    printf("Enter your ID:");
    scanf("%d", &(EmployeeList + *numEmployees)->ID);
    printf("Enter your name:");
    scanf(" %[^\n]", (EmployeeList + *numEmployees)->name);
    getchar();
    printf("Enter your age:");
    scanf("%d", &(EmployeeList + *numEmployees)->age);

    (*numEmployees)++;
}

void displayEmployee(struct Employee *Employee_ptr)
{
    printf("ID: %d", Employee_ptr ->ID);
    printf("Name: %s", Employee_ptr ->name);
    printf("Age: %d\n", Employee_ptr ->age);

}

struct Employee* updateEmployeeinfo(struct Employee *EmployeeList, int numEmployees, char *EmployeeName)
