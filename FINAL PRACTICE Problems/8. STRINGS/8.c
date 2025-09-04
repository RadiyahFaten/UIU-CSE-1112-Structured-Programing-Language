#include<stdio.h>
void AlphabeticalOrder(char str[]);

int main()
{
    char str[128];
    scanf("%[^\n]", str);

    AlphabeticalOrder(str);
    printf("%s\n", str);

}

void AlphabeticalOrder( char str[])
{
    int len = 0;
    while (str[len] != 0 ) len++;

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if ( str[j] > str[ j + 1] )  {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

}
