#include<stdio.h>
void removeAllDuplicates(char str[]);
int getSize(char str[]);
void checkPalindrome(char *str );
int main()
{
    char s[64];
    scanf(" %[^\n]", s);

    removeAllDuplicates(s);
    printf("%s\n", s);

    checkPalindrome(s);
}

void removeAllDuplicates(char str[])
{

    int len = 0;
    while(str[len] != 0 ) len++;

    int n = len;

    for(int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] == str[j]) {
                for(int k = j; k < n; k++) {
                    str[k] = str[k + 1];
                }
                n--;
                j--;
            }
        }

    }
}

int getSize(char str[])
{
    int len = 0;
    while (str[len] != 0 ) len++;

    return len;
}

void checkPalindrome(char *str )
{
    int len = getSize(str);
    removeAllDuplicates(str);

    int palindrome = 1;
    for(int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
                palindrome = 0;
                break;
        }
    }

    if (palindrome == 1 ) printf("Palindrome");
    else printf("Not palindrome");
}
