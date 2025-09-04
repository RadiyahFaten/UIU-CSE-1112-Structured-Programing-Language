#include<stdio.h>
int number_of_words(char str[]);
int nth_word_length(char str[], int n);
int is_prime(int number);
int is_spell(char str[]);
int main()
{

    char str[1024];
    scanf("%[^\n]", str);

    if (is_spell(str)) printf("Yes");
    else printf("No");

}

int number_of_words(char str[])
{
    int space = 0;
    for(int i = 0; str[i] != 0; i++) {
        if (str[i] == ' ') space++;
    }
    int word = space + 1;
    return word;
}

int nth_word_length(char str[], int n)
{
    int m = number_of_words(str);

    int a[m + 1];
    a[0] = 0;
    int i, j;
    for ( i = 0, j = 1; str[i] != 0; i++ ) {
        if (str[i] == ' ' ) {
            a[j] = i;
            j++;
        }
    }
    a[m] = i;

    int len= 0;
    for (int i = a[n - 1]; i < a[n]; i++ ) {
        if ( (str[i] >= 'a'  && str[i] <= 'z')  || (str[i] >= 'A'  && str[i] <= 'Z')) len++;
    }
    return len;

}

int is_prime(int number)
{
    for (int i = 2; i <= number - 1; i++) {
        if (number % i == 0 ) return 0;
    }
    return 1;
}


int is_spell(char str[])
{
    int word_count = number_of_words(str);

    for (int i = 1; i <= word_count; i++) {
        if (nth_word_length(str, i) > 9) {
        return 0;
        }
    }

    int m = 0;
    for (int i = 1; i <= word_count; i++) {
        m *= 10;
        m += nth_word_length(str, i);
    }

    if (is_prime(m)) return 1;
    else return 0;

}
