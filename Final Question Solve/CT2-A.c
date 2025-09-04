#include<stdio.h>
void take_input(char str[]);
int extract_words(char sentence[], char words[][20]);
int is_magic_word(char word[]);
void check_magical_sentence(char words[], int count);
int main()
{
    char sentence[64];
    char words[32][20];

    //if(is_magic_word( word)) printf("Yes");
    //else printf("No");

    take_input(sentence);
    int n = extract_words(sentence, words);
    for (int i = 0; i < n; i++)
    {
        check_magical_sentence(words[i], n);
    }

}

void take_input(char str[])
{
    scanf("%[^\n]", str);
}

int extract_words(char sentence[], char words[][20])
{
    int count = 1;

    int i, j, k;
    for (i = 0, j = 0, k = 0; sentence[i] != 0; i++, k++) {

        if(sentence[i] == ' ') {

            count++;
            words[j][k] = 0;
            i++;
            j++;
            k = 0;
        }

        words[j][k] = sentence[i];
    }
        words[j][k] = 0;

        return count;
}

int is_magic_word(char word[])
{
    int vowel = 0;
    char c = 'A' - 1;
    for (int i = 0; word[i] != 0; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            vowel++;
            if( c <= word[i] ) c = word[i];
            else return 0;
        }
    }
    if (vowel >= 5 ) return 0;
    return 1;
}

void check_magical_sentence(char words[], int count)
{
    int m = 0;
    if(is_magic_word(words)) {
            m++;
    }
    printf("Magical sentence");
}
