#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]", str);

    int word = 0;
    for (int i = 0; str[i] != '\0'; i++ ) {
        if (str[i] == ' ' ) word++;
    }
    word += 1;
    printf("%d", word);
}
