#include<stdio.h>

struct player {

    char name[32];
    char country[16];
    int run[3];
    int wicket[3];
    int points[3];

};

int main()
{
    struct player p[2];

    for (int i = 0; i < 2; i++) {
        scanf(" %[^\n]", p[i].name);
        getchar();
        scanf(" %[^\n]", p[i].name);
        getchar();
        for(int j = 0; j < 3; j++) scanf("%d", p[i].run[j]);
        for(int j = 0; j < 3; j++) scanf("%d", p[i].wicket[j]);
    }


    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            int runpoint = 0;
             if ( p[i].run[j] <= 25 ) runpoint = 5;
            else if ( p[i].run[j] > 25 && p[i].run[j] <= 50) runpoint = 10;
            else if ( p[i].run[j] > 50 && p[i].run[j] <= 75) runpoint = 15;
            else runpoint = 20;

            p[i].points[j] = (p[i].wicket[j] * 12) +  runpoint;
        }
    }

    int max = p[0].points[0], maxIn = 0;
    for (int j = 0; j < 3; j++) {
        printf("Match %d", j + 1);
        for (int i = 0; i < 2; i++) {
            printf("%s points: %d\n", p[i].name, p[i].points[j]);
            if (p[i].points[j] > max) {
                    max = p[i].points[j];
                    maxIn = i;
            }
        }
        printf("MOM: %s\n", p[maxIn].name);
    }

}
