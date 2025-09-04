#include<stdio.h>

struct student {

    char name[64];
    int ID;
    float cgpa;
};

int main()
{
    struct student s1, s2;
    scanf(" %[^\n] %d %f", s1.name, &s1.ID, &s1.cgpa);
    scanf(" %[^\n] %d %f", s2.name, &s2.ID, &s2.cgpa);

    if ( s1.cgpa > s2.cgpa )
    printf("%s\n%d\n%f\n", s1.name, s1.ID, s1.cgpa);
    else
    printf("%s\n%d\n%f\n", s2.name, s2.ID, s2.cgpa);

}

