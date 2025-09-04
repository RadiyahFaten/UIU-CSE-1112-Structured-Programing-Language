#include<stdio.h>

struct student {

    int id;
    char name[64];
    float cgpa;

};

int main()
{
 struct student s[20];
    printf("\t\t===== Student Management System=====\n");
    printf("1. Add New Student\n2. Find Top Student (Highest CGPA)\n3. Find Average CGPA of Students\n4. Display All Students Information\n5. Exit");
    int choice;

    int count = 0;
    while(1) {

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:

            if (count > 20) {
                printf("Maximum student limit reached.\n");
            }
            printf("Enter Student ID: ");
            scanf("%d", &s[count].id);

            printf("\nEnter Student Name: ");
            scanf(" %[^\n]", &s[count].name);

            printf("\nEnter Student CGPA:");
            scanf("%f", &s[count].cgpa);
            printf("\nStudent Added Successfully!");
            count++;
            break;


            case 2:

                if (count == 0) {
                    printf("No students added yet");
                    break;
                }

                float max = s[0].cgpa;
                int  j = 0;
                for (int i = 0; i < count; i++) {
                    if (s[i].cgpa > max) {
                            max = s[i].cgpa;
                            j = i;
                    }
                }
                printf("Top Student:\nID: %d\tName: %s\tCGPA: %f", s[j].id, s[j].name, max);

            break;

            case 3:

                if (count == 0) {
                    printf("No students added yet");
                    break;
                }

                float sum = 0;
                for (int i = 0; i < count; i++)
                    sum += s[i].cgpa;
                printf("Total Students: %d\nAverage CGPA: %f\n", count, (sum / count));

            break;

            case 4:

                if (count == 0) {
                    printf("No students added yet");
                    break;
                }

                printf("Student Information\n");
                for(int i = 0; i < count; i++) {
                    printf("ID: %d\tName: %s\tCGPA: %f\n", s[i].id, s[i].name, s[i].cgpa);
                }

            break;

            case 5:
            return 0;


        }

        }

}
