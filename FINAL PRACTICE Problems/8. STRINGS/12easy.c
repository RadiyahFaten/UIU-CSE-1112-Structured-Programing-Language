#include<stdio.h>
int word_count(char s[]);
int word_compare(char s[], char w[], int n);

int main()
{
    char s[64], w[32];
    scanf("%[^\n]  %[^\n]", s, w);

    //printf("%d", word_count(s) );

    int occur = 0;
    for (int i = 1; i <= word_count(s); i++) {
        if (word_compare(s, w, i)) occur++;
    }

    printf("%d", occur);

}

int word_count(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != 0; i++) {
        if (s[i] == ' ' ) count++;
    }
    count +=1;
    return count;
}


int word_compare(char s[], char w[], int n)
{
    int count = word_count(s);

    int b[count], e[count];
    b[0] = 0;

    int i, j;
    for ( i = 0, j = 0; s[i] != 0; i++) {
        if (s[i] == ' ' ) {
            b[ j + 1] = i + 1;
            e[j] = i - 1;
            j++;
        }
    }
    e[count - 1] = i - 1;

    for (int i = b[n - 1], j = 0; i <= e[n - 1] && w[j] != 0; i++, j++)
    {
        if ( s[i] != w[j] ) return 0;
    }

    int lens = e[n - 1] - b[ n- 1] + 1;
    int lenw = 0;
    while (w[lenw] != 0 ) lenw++;

    if (lens != lenw) return 0;
    else return 1;

}


