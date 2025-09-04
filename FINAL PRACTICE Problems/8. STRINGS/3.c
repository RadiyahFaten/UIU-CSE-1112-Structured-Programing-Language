#include<stdio.h>

int main()
{
    char name[100];
    scanf("%[^\n]", name);

    int vowel_count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        if ( name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U' ||
            name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
            vowel_count++;
            }
            printf("%d", vowel_count);
}
