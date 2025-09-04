#include<stdio.h>

int main()
{
    char str[64];
    char *p = str;

    scanf("%[^\n]", p);

    int vowel = 0, consonant = 0;

    for (int i = 0; *(p + i) != 0; i++) {

        if ( (*(p + i) >= 'A' && *(p + i) <= 'Z' ) || ( *(p + i) >= 'a' && *(p + i) <= 'z' ) ) {

             if ( *(p + i) == 'A' || *(p + i) == 'E' || *(p + i) == 'I' || *(p + i) == 'O' || *(p + i) == 'U'
                 || *(p + i) == 'a' || *(p + i) == 'e' || *(p + i) == 'i' || *(p + i) == 'o' || *(p + i) == 'u'  )
                    vowel++;

            else consonant++;
        }
    }
    printf("Vowel: %d\nConsonant: %d\n", vowel, consonant);

}
