#include<stdio.h>
void extract_words(char sentence[], char words[][32]);
int main()
{
    char s[64], words[64][32];
    scanf("%[^\n]", s);

    int count = 1;
    for(int i = 0; s[i] != 0; i++) {
            if (s[i] == ' ') count++;
    }

    extract_words(s, words);
    for (int i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
}


void extract_words(char sentence[], char words[][32])
{
    int i = 0, j = 0, k = 0;
    for ( ; sentence[i] != 0; i++, k++) {
        if ( sentence[i] == ' ' ) {
            words[j][k] = 0;
            i++;
            j++;
            k = 0;
        }
        words[j][k] = sentence[i];
    }
        words[j][k] = 0;

}
