#include<stdio.h>

int main()
{
    int i,n, j;

    scanf("%d",&n);

    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long int sub = 0, total = 0;

    for(i=0;i<n - 1;i++)
    {
        for(j=i+1; j<= i+1;j++)
        {
            if(arr[j] < arr[i])
            {
                sub = arr[i] - arr[j];
//                printf("%d--%d = %lld\n",arr[i], arr[j], sub);
                arr[j] += sub;
                total += sub;
//                printf("total=%lld\n",total);
            }
        }
    }

    printf("%lld", total);

    return 0;
}
