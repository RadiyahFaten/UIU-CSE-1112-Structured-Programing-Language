#include<stdio.h>

int main()
{
    char str[64];

    char *p = str; //pointer to the first element of string
    scanf("%[^\n]", p);

    printf("%s\n", p);

    int len = 0;
    for (int i = 0; *(str + i)!= 0; i++) len++;

    //while ( *(s + len) != 0 ) len++;
    printf("%d", len);

}
