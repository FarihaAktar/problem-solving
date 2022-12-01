
#include<stdio.h>


void find_medium(int x, int y, int z)
{
    if((x < y && x > z) || (x> y && x < z))
    {
        printf("%d\n", x);
    }
    else if((y < x && y > z)|| (y > x && y < z))
    {
        printf("%d\n", y);
    }
    else if((z < x && x > y) || (z > x && z < y))
    {
        printf("%d\n", z);
    }
}


int main()
{
    int t;
    int a, b, c;

    scanf("%d\n", &t);

    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&a, &b, &c);
        find_medium(a, b, c);
    }


    return 0;
}
