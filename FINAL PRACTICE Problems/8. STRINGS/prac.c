#include<stdio.h>
char * remove_repeat(char s[]);
int main()
{
    char s[64];
    scanf("%[^\n]", s);

    printf("%s\n", remove_repeat(s));


}

char * remove_repeat(char s[])
{
    int len = 0;
    while (s[len] != 0) len++;

    for (int i = 0; i < len - 1; i++) {
        for (int j = i +1; j < len; j++) {
            if( s[i] == s[j]) {
                for (int k = j; k < len; k++) {
                    s[k] = s[k + 1];
                }
                len--;
                j--;
            }
        }
    }
    return s;
}
