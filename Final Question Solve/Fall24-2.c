#include<stdio.h>

struct student {

    char name[64];
    int id;
    float marks[5];
    float avg;

};

int main()
{

    struct student s[100];

    printf("Student Performance Management System\n1. Add a new student\n2. Display all students\n3. Find top performer\n4. Find failing students\n5. Exit");

    int choice, count = 0;

    while (1) {

    printf("\nEnter your choice: ");
    scanf("%d", &choice);


        switch( choice ) {

            case 1:
                printf("Enter your name: ");
                scanf(" %[^\n]", s[count].name);
                getchar();

                printf("Enter your ID: ");
                scanf("%d", &s[count].id);

                printf("Enter your marks for 5 subjects: ");
                for (int i = 0; i < 5; i++) {
                        scanf("%f", &s[count].marks[i]);
                }

                float sum = 0;
                for (int i = 0; i < 5; i++) {
                        sum+= s[count].marks[i];
                }

                s[count].avg = sum / 5.0;

                printf("\nStudent added successfully.");
                count++;

            break;

            case 2:

                if (count == 0) {
                        printf("Students not added yet!");
                        break;
                }

                for (int i = 0; i < count; i++) {
                printf("Name: %s, ", s[i].name);
                printf("ID: %d, ", s[i].id);
                printf("Marks: ");
                for(int j = 0; j < 5; j++ ) printf("%0.2f,", s[i].marks[j]);
                printf("Average: %0.2f", s[i].avg );
                printf("\n");
                }

            break;

            case 3: {

                if (count == 0) {
                        printf("Students not added yet!");
                        break;
                }

                float max = s[0].avg;
                int j = 0;
                for (int i = 0; i < count; i++) {
                    if( s[i].avg > max ) {
                            max = s[i].avg;
                            j = i;
                    }
                }
                printf("Top Performer: %s, Average Marks: %0.2f", s[j].name, s[j].avg);


            break;
            }

            case 4: {


                for (int i = 0; i < count; i++) {
                    int fail =0;
                    int flag = 0;
                    int k = 0;
                    for (int j = 0; j < 5; j++) {

                        if (s[i].marks[j] < 40) {
                            fail++;
                            k = i;
                            flag = 1;
                        }
                    }
                    if (flag == 1) printf("Failing Students:\nID: %d, Name: %s, Failed Subjects: %d", s[k].id, s[k].name, fail);
                }

            break;
            }
            case 5:

                printf("Exiting the program.");

            return 0;


        }


    }

}
