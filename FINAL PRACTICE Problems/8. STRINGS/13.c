#include<stdio.h>

void remove_repeat(char s[]);
int main()
{
    char s[128];
    scanf("%[^\n]", s);

     remove_repeat(s);
    printf("%s\n", s);
}

void remove_repeat(char s[])
{
    int len = 0;
    while (s[len] != 0) len++;

    int n = len;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n ; j++) {
            if (s[i] == s[j]) {
                for (int k = j ; k < n; k++) {
                    s[k] = s[k+ 1];
                }
                n--;
                j--;
            }
        }
    }
}
