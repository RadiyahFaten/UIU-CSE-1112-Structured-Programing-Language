#include<stdio.h>
#include<math.h>

int is_perfect_square(int x);
int are_digits_non_decreasing(int x);
void find_perfect_square_sorcerers(int start, int end);

int main()
{
    int start, end;
    scanf("%d%d", &start, &end);

    //if(is_perfect_square(start)) printf("Perfect square");
    //else printf("Not Perfect square");

    //if(are_digits_non_decreasing(start)) printf("Yes");
    //else printf("No");

   find_perfect_square_sorcerers(start, end);


}

int is_perfect_square(int x)
{
    float p = sqrt(x);
    int square = (int) p * (int) p;
    if (square == x) return 1;
    else return 0;
}

int are_digits_non_decreasing(int x)
{
    int y = x;
    while ( y != 0 ) {

    int rem1 = y % 10;
    y /= 10;
    int rem2 = y % 10;
    if ( rem1 < rem2 ) return 0;

    }
    return 1;
}

void find_perfect_square_sorcerers(int start, int end)
{
    for (int i = start; i <= end; i++) {
        if (is_perfect_square(i) && are_digits_non_decreasing(i)) printf("%d\n", i);
    }
}
