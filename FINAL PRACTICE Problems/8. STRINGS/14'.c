#include<stdio.h>
int maximum_index(int a[], int n);
int max_duplicate(char s[]);
void lower(char s[]);

int main()
{
    char s[128];
    scanf("%[^\n]", s);
    lower(s);

    char most_occuring = s[max_duplicate(s)];
    printf("%c (or %c)", most_occuring - 32, most_occuring);
}

void lower(char s[])
{
    for (int i = 0; s[i] != 0; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
}

int max_duplicate(char s[])
{
    int len = 0;
    while (s[len] != 0 ) len++;

    int count[len];
    for (int i = 0; i < len; i++) count[i] = 0;

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++ ) {
            if (s[i] == s[j]) count[i]++;
        }
    }
    int max = maximum_index(count, len);

}

int maximum_index(int a[], int n)
{
    int max_index = 0;
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] >= max) {
                max = a[i];
                max_index = i;
        }
    }
    return max_index;
}

