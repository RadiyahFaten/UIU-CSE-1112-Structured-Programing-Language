#include<stdio.h>
struct student {

    char name[64];
    int ID;
    float cgpa;
};

void highest_cgpa(struct student s1, struct student s2);

int main()
{
    struct student s1, s2;
    scanf(" %[^\n] %d %f", s1.name, &s1.ID, &s1.cgpa);
    scanf(" %[^\n] %d %f", s2.name, &s2.ID, &s2.cgpa);

    highest_cgpa(s1, s2);

}

void highest_cgpa(struct student s1, struct student s2)
{
    if ( s1.cgpa > s2.cgpa )
    printf("%s\n%d\n%.2f\n", s1.name, s1.ID, s1.cgpa);
    else
    printf("%s\n%d\n%.2f\n", s2.name, s2.ID, s2.cgpa);

}

