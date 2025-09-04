#include<stdio.h>
struct student {

    int ID;
    char name[64];
    float cgpa;
};

void AddStudent(struct student *s, int *count);
void TopStudent(struct student *s, int *count);
float AverageCGPA(struct student *s, int *count );
void DisplayStudent(struct student *s, int *count);

int main()
{

    struct student s[100];
    int choice, count = 0;

    while(1) {

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            AddStudent(s, &count);
        }

        else if (choice == 2) {
            TopStudent(s, &count);
        }

        else if (choice == 3) {
            float avg = AverageCGPA(s, &count);
            printf("Total Students: %d\nAverage CGPA: %f\n", count, avg);

        }

        else if (choice == 4) {
            DisplayStudent(s, &count);
        }


    }
}

void AddStudent(struct student *s, int *count)
{
    if (*count > 100) {
                printf("Maximum student limit reached.\n");
            }

    printf("Enter Student ID: ");
    scanf("%d", &(s + *count)->ID ); //same as &(*(s + *count)).id or &s[count].id
    printf("\nEnter Student Name: ");
    scanf(" %[^\n]", (s + *count)->name);
    printf("\nEnter Student CGPA:");
    scanf("%f", &(s + *count)->cgpa);

    (*count)++;
    printf("\nStudent Added Successfully!");
}

void TopStudent(struct student *s, int *count)
{
    if (count == 0) {
            printf("No students added yet");
            return;
            }

    int j;
    float max = s->cgpa; //same as s[0].cgpa
    for (int i = 0; i < (*count); i++ ) {
        if ( (s + i)->cgpa > max ) {
            max = (s + i)->cgpa;
            j = i;
        }
    }
    printf("Top Student:\nID: %d\tName: %s\tCGPA: %f", (s + j)->ID, (s + j)->name, max);

}

float AverageCGPA(struct student *s, int *count )
{
    if (count == 0) {
            printf("No students added yet");
            return;
            }

    float sum = 0;
    for (int i = 0; i < (*count); i++ ) {
        sum += (s + i)->cgpa;
    }

    float avg = sum / (*count);
    return avg;

}

void DisplayStudent(struct student *s, int *count)
{
    if (count == 0) {
            printf("No students added yet");
            return;
            }
    for (int i = 0; i < (*count); i++) {
        printf("ID: %d\tName: %s\tCGPA: %f\n", (s + i)->ID, (s + i)->name, (s + i)->cgpa);

    }
}



