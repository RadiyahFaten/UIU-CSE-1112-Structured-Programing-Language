#include<stdio.h>

struct triangle {

    int triangle_id;
    int base;
    int height;
};

int main()
{
    struct triangle t1, t2, t3;

    scanf("%d %d %d", &t1.triangle_id, &t1.base, &t1.height);
    scanf("%d %d %d", &t2.triangle_id, &t2.base, &t2.height);
    scanf("%d %d %d", &t3.triangle_id, &t3.base, &t3.height);

    float area1 = (t1.base * t1.height) / 2;
    float area2 = (t2.base * t2.height) / 2;
    float area3 = (t3.base * t3.height) / 2;

    if (area1 > area2 && area1 > area3) printf("Area of %d: %.2f\n", t1.triangle_id, area1);
    else if (area2 > area1 && area2 > area3) printf("Area of %d: %.2f\n", t2.triangle_id, area2);
    else printf("Area of %d: %.2f", t3.triangle_id, area3);
}



