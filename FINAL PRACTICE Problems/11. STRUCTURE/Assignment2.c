#include<stdio.h>

struct student {

    int ID;
    char name[64];
    float cgpa;

};

int main()
{
    struct student s[10];
    printf("\t\t===== Student Management System=====\n");
    printf("1. Add New Student\n2. Find Top Student (Highest CGPA)\n3. Find Average CGPA of Students\n4. Display All Students Information\n5. Exit");
    int choice;
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        printf("Enter Student ID: ");
        scanf("%d", &s1.ID);

        printf("\nEnter Student Name: ");
        scanf(" %[^\n]", &s1.name);

        printf("\nEnter Student CGPA:");
        scanf("%f", &s1.cgpa);
        printf("\nStudent Added Successfully!");
        break;

        case 2:
        break;

        case 3:
        break;

        case 4:
        break;

        case 5:
        break;


    }


}
