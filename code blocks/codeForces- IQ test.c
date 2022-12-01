#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n], odd = 0, even = 0, evenPosition = 0, oddPosition = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n;i++)
    {
        if(arr[i] % 2 == 0)
        {
            even += 1;
            evenPosition = i +1;
        }
        else
        {
            odd += 1;
            oddPosition = i + 1;
        }
    }

    if(even == 1)
    {
        printf("%d",evenPosition);
    }
    if(odd == 1)
    {
        printf("%d",oddPosition);
    }
    return 0;
}
