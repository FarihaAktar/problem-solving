#include<stdio.h>



int main()
{
    int t;
    int l1, l2, r1, r2;

    scanf("%d\n", &t);

    for(int i = 0; i<t; i++)
    {
        scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

        if(l2 <= r1 && l2 >= l1)
        {
            printf("%d\n", l2);
        }
        else if((l2 >  r1 && l2 > l1) || (l2 < l1 && l2 < r1))
        {
            printf("%d\n", l2 + l1);
        }
        else if(l1 == l2 && r1 == l2 && l2 == r2)
        {
            printf("%d\n", l1);
        }
    }
    return 0;
}
