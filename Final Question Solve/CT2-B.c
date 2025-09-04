#include<stdio.h>
int is_palindrome(char word[]);
int main()
{
    char sentence[64];
    char words[32];
    scanf("%[^\n]", words);

    //take_input(sentence);

    //int n = extract_words(sentence, words);

    //for (int i = 0; i < n; i++) {
    //find_wonder_words(words[i], n)
    //}

    if (is_palindrome(words)) printf("Hell yeah");
    else printf("No");
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

int is_palindrome(char word[])
{
    int len = 0;
    while(word[len] != 0) len++;

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (word[i] != word[j]) return 0;
    }

    return 1;
}


