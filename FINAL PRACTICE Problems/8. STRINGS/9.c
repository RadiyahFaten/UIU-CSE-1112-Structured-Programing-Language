#include<stdio.h>
int char_occurance(char str[], char c);

int main()
{
    char str[128];
    scanf("%[^\n]", str);

    char c;
    scanf(" %c", &c);

    printf("%d", char_occurance(str, c));

}

int char_occurance(char str[], char c)
{
    char c_c;
    if (c >= 'a' && c <= 'z' )  c_c = c - 32;
    else if (c >= 'A' && c <= 'Z' )  c_c = c + 32;

    int count = 0;
    for (int i = 0; str[i] != '\0' ; i++) {
        if (str[i] == c || str[i] == c_c ) count++;
    }
    /*int count2 = 0;
    for (int i = 0; str[i] != '\0' ; i++) {
        if (str[i] == c_c ) count2++;
    }*/
    //int count = count1 + count2;
    return count;

}


