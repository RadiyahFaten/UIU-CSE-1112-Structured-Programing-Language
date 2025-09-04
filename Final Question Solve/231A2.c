#include<stdio.h>

struct program {

    char name[60];
    int total_memory;
    int used_memory;

};

int all_caps(char *input);
int main()
{
    int N;
    scanf("%d", &N);
    struct program s[N];

    for (int i = 0; i < N; i++) {
        printf("Enter name:");
        scanf(" %s", s[i].name);
        printf("Total Memory: ");
        scanf("%d", &s[i].total_memory);
        printf("Used Memory: ");
        scanf("%d", &s[i].used_memory);
    }

    int count = 0;
    for (int i = 0; i < N; i++ ) {
        if ( (s[i].used_memory >= s[i].total_memory) && (all_caps(s[i].name) ) ) {
            count++;
        }
    }
    printf("%d\n", count);

    for (int i = 0; i < N; i++ ) {
        if ( (s[i].used_memory >= s[i].total_memory) && (all_caps(s[i].name) ) ) {
            printf("%s\n", s[i].name);
        }
    }

}

int all_caps(char *input)
{
    for(int i = 0; input[i] != 0; i++ ) {
        if( !(input[i] >= 'A' && input[i] <= 'Z')) return 0;
    }
    return 1;

}
