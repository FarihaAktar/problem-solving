#include<stdio.h>

int main()
{
    int i,n, k, total=0;

    scanf("%d %d",&n, &k);

    int arr[n + 1];

    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=1; i<=n;i++)
    {
        if(arr[i]>=arr[k] && arr[i] > 0)
            total += 1;
    }

    printf("%d", total);

    return 0;
}
