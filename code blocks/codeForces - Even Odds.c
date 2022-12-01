#include<stdio.h>

int main()
{
    int i;
    long long int n,  k, odd = 0, output = 0;

    scanf("%I64d %I64d",&n, &k);

    if(n%2 == 0)
    {
        odd = n /2;
    }
    else
    {
        odd = (n/2) + 1;
    }

//    printf("%I64d", k);
    if(k > odd && k != odd)
    {
        output = (k - odd) * 2;
    }
    else
    {
        output = (k * 2) - 1;
    }

    printf("%I64d", output);

    return 0;
}

