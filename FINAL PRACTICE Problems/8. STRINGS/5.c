#include<stdio.h>
int string_length(char str1[]);
void reverse_function(char str1[]);

int main()
{
    char str[100];
    scanf("%[^\n]", str);

    reverse_function(str);
    printf("%s\n", str);
}

int string_length(char str1[])
{
    int len = 0;
    for (int i = 0; str1[i] != '\0'; i++) len++;

    return len;
}

void reverse_function(char str1[])
{
    int len = string_length(str1);

    for(int i = 0, j = len - 1; i < j ; i++, j--) {
        int temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }

}
