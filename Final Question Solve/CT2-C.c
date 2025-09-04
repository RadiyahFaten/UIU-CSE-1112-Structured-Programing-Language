#include<stdio.h>
void take_input(char str[]);
int extract_words(char sentence[], char word[][20]);
int is_magic_word(char word[]);
void find_magic_word(char words[][20], int count);

int main()
{
    char sentence[64];
    char words[32][20];

    //printf("%d", is_magic_word(words));

    take_input(sentence);
    int n = extract_words(sentence, words);

    //for (int i = 0; i < n ; i++) printf("%s\n", words[i]); the easier way for string type 2D Array

    for (int i = 0; i < n; i++) {
        for (int j = 0; words[i][j] != 0; j++) printf("%c", words[i][j]); //the basic syntax
        printf("\n");
    }

    find_magic_word(words, n);

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
    int len = 0;
    while (word[len] != 0 ) len++;

    if (len % 2 == 1) return 0;

    for (int i = 0; word[i] != 0; i++) {
        if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' && word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U') return 0;
    }
    return 1;
}

void find_magic_word(char words[][20], int count)
{
    for (int i = 0; i < count; i++) {
        if(is_magic_word(words[i])) {
                printf("Magic word found!");
                return;
        }
    }
    printf("Magic word not found!");
}
