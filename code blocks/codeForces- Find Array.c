#include<stdio.h>

int main()
{
    int t;
    long long int n;

    scanf("%d", &t);

    for(int i= 0; i<t; i++)
    {
        scanf("%lld", &n);
        int k = 2;
        if(n == 1)
        {
            printf("%lld ", n);
        }
        else
        {
            for(int j= 1; j<=n;j++)
            {
                if(k == 2)
                {
                    printf("%d ", k);
                    k++;
                }
                else if(k % k-1 != 0 && k != 2)
                {
                    printf("%d ",k);
                    k++;
                }
                else if(k % k -1 == 0 && k != 2)
                {
                    k++;
                }

            }
        }
        printf("\n");

    }
    return 0;
}
