#include<stdio.h>


int is_prime(int x)
{
    for(int i=2; i<=x/2; i++)
    {
        if(x % i ==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;

    scanf("%d", &t);

    int n;

    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);

        printf("%d\n", n);

    }
    return 0;
}
