#include<stdio.h>
int length_function(char a[]);

int main()
{
    char name[100];
    scanf("%[^\n]", name);


    int length = length_function(name);
    printf("Length of your name: %d", length);

}

int length_function(char a[])
{
    int len = 0;
    //for (int i = 0; a[i] != '\0'; i++) len++;

    while (a[len] != 0) len++;

    return len;
}
