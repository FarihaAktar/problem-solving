#include<stdio.h>

int coins(int a, int b);

int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i<t; i++)
    {
        int x, y;

        scanf("%d %d", &x, &y);

        int res = coins(x, y);
        printf("%d\n", res);
    }

    return 0;


}


int coins(int a, int b)
{
    int res = 0;
    if(a == 0)
    {
        return 1;
    }
    else if(a > 0)
    {
        res += a + (b * 2) + 1;
    }
    return res;
}
