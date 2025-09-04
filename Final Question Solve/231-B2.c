#include<stdio.h>

struct card {

    char name[60];
    int stage;
    int HP;

};

int ends_with(char *input, char letter);
 int main()
{
    int N;
    scanf("%d", &N);
    struct card c[N];

    for (int i = 0; i < N; i++) {

        scanf("%s", c[i].name);
        scanf("%d", &c[i].stage);
        scanf("%d", &c[i].HP);
    }

    //char letter = 'X';
    int base = 0;

    for(int i = 0; i < N; i++) {
        base += 50;
        base += c[i].HP;
        if (c[i].stage == 1) base += 30;
        else if (c[i].stage == 2) base+= 80;
        if (ends_with(c[i].name , letter)) base +=200;
    }

    printf("%d", base);

}

int ends_with(char *input, char letter)
{
    int len = 0;
    while (input[len] != 0) len++;

    if (input[len - 1] == letter ) return 1;
    else return 0;

}
