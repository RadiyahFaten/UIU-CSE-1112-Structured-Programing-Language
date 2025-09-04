#include<stdio.h>
int main()
{
    int n;
    printf("Enter number = ");
    scanf("%d", &n);

    for(int i = 1; i < n  ; i++) {
            int count = i - 1;
        for (int j = 1; j < n ; j++) {
            if ( j < n - i) printf("  ");
            else {
                    printf("%d ", count);
                    count -=1;
                }
        }
            count +=1;
        for (int k = 2; k <= i; k++) {
            count +=1;
            printf("%d ", count);
        }
        printf("\n");
    }

}
