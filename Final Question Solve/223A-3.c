#include<stdio.h>

struct customer {

    int ID;
    char name[64];
    char birthday[64];
    char house[64];
    int cost[3];

};
int substringChecker(char *mainString, char *searchString);
int main()
{
    //int n;
    //printf("Num of Customer: ");
    //scanf("%d", &n);

    //dstruct customer c[n];

    //for(int i = 0; i < n; i++) {

        //scanf("%d", &c[i].id);
        //scanf(" [^\n]", c[i].name);
        //getchar();
        //scanf(" [^\n]", c[i].birthday);
        //getchar();
       // scanf(" [^\n]", c[i].house);
        //getchar();

    //}

    char s[64];
    scanf("%[^\n]", s);
    char word[32];
    scanf(" %[^\n]", word);

    if(substringChecker(s, word)) printf("Hell yeah");
    else printf("No");


}

int substringChecker(char *mainString, char *searchString)
{
    int i, j;
    for ( i = 0; mainString[i] != 0; i++) {
        for ( j = 0; searchString[j] != 0; j++) {
               if (mainString[i + j] != searchString[j])
                break;
        }
        if( searchString[j] == 0 ) return 1;
    }
    return 0;

}
