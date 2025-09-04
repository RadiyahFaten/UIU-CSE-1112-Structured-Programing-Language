#include<stdio.h>
#include<string.h>

char * concatenate_string(char s1[], char s2[]);
int main()
{
    char s1[128];
    scanf("%[^\n]", s1);

    char s2[128];
    scanf(" %[^\n]", s2);

    //strcat(s1, s2);
    //printf("%s\n", s1);


    printf("%s\n",   concatenate_string(s1, s2));

}

char * concatenate_string(char s1[], char s2[])
{
    int len = 0, i ;
    while (s1[len] != 0) len++;

    for (i = 0; s2[i] != 0; i++) s1[len + i] = s2[i];
    s1[len+i] = 0;
    return s1;
}
