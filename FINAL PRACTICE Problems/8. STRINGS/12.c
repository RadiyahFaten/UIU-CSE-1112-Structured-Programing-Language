#include<stdio.h>
int occurance(char str[], char word[]);
int compare_word(char str[], char word[], int word_start, int word_end );

int main()
{
     char str[128];
    scanf("%[^\n]", str);

    char word[32];
    scanf("%s", word);

    int occur = occurance(str, word);
    printf("%d", occur);

}

int occurance(char str[], char word[])
{
    int occurance = 0, word_start = 0, i = 0;
    for ( ; str[i] != 0; i++) {
        if (str[i] == ' ' ) {

             if (compare_word(str, word, word_start, i))
                occurance++;

            word_start = i + 1;
        }

    }
    if (compare_word(str, word, word_start, i))
                occurance++;

    return occurance;
}

int compare_word(char str[], char word[], int word_start, int word_end  )
{
    int flag = 1;
    for (int j = 0, k = word_start; word[j] != 0 && k < word_end; j++, k++) {
        if (word[j] != str[k]) flag = 0;
    }
    return flag;
}
