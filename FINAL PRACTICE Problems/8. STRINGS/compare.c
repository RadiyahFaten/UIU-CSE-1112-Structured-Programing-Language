#include<stdio.h>
#include<string.h>
int compare_string(char s1[], char s2[]);

int main()
{
    char s1[128];
    scanf("%[^\n]", s1);

    char s2[128];
    scanf(" %[^\n]", s2);

    int k = strcmp(s1, s2);

    if (k == 0) printf("Both strings are equal.\n");
    else if (k > 0) printf("String 1 is greater.\n");
    else printf("String 2 is greater.\n");

    int m = compare_string(s1, s2);
    if (m == 0) printf("Both strings are equal.\n");
    else if (m > 0) printf("String 1 is greater.\n");
    else printf("String 2 is greater.\n");
}

int compare_string(char s1[], char s2[])
{
    int i;
   for(i = 0; s1[i] != 0 && s2[i] != 0; i++) {
       if (s1[i] != s2[i] ) return s1[i] - s2[i];
   }
   return s1[i] - s2[i];
}
