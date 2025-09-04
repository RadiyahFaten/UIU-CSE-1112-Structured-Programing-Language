#include<stdio.h>
#include<string.h>
char* string_copy(char s2[], char s1[]);

int main()
{
    char s1[128], s2[128];
    scanf("%[^\n]", s1);
    printf("Main string: %s\n", s1);



    printf("Copied string: %s\n", string_copy(s2, s1));

    //printf("Copied string using library function: %s", strcpy(s2, s1));
}

char * string_copy(char s2[], char s1[])
{
    int i;
    for ( i = 0; s1[i] != 0; i++) {
        s2[i] = s1[i];
    }
    s2[i] = 0;
    return s2;
}
