#include<stdio.h>
void lower(char s[]);
int maximum_duplicate(char s[]);
int maximum_index(int a[], int n);

int main()
{
    char s[128];
    scanf("%[^\n]", s);

    lower(s);
    int n = maximum_duplicate(s);
    char most_occuring = s[n];

    printf("%c (or %c)", s[n] - 32, s[n]);


}

void lower(char s[])
{
    for (int i = 0; s[i] != 0; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
}

int maximum_duplicate(char s[])
{
    int len = 0;
    while (s[len] != 0 ) len++;

    int count[len];
    for (int i = 0; i < len; i++) count[i] = 0;

    for (int i = 0; i < len; i++ ) {
        for (int j = 0; j < len; j++) {
            if (s[i] == s[j]) count[i]++;
        }
    }
    int max = maximum_index(count, len);
    return max;
}

int maximum_index(int a[], int n)
{
    int max_index = 0;
    for (int i = 0; i < n; i++) {
        int max = a[0];
        if (a[i] >= max) {
            max = a[i];
            max_index = i;
        }
    }
    return max_index;
}
