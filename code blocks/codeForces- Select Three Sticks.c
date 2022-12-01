#include<stdio.h>
#include<math.h>
#include <limits.h>

int sort(long long int arr[301], int n)
{
    long long int swap;
    for(int i = 0; i<n; i++)
    {
        for(int j= i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
}

int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}


int minimum_operation(long long int arr[301], int n)
{
    sort(arr, n);

    long long int mini = INT_MAX;
    for(int i=2; i<n; i++)
    {
        long long int x = arr[i];
        long long int y = arr[i-1];
        long long int z = arr[i-2];

        long long int s = (x-y) + (y - z);
        mini = min(mini, s);

    }
    return mini;


}

int main()
{
    int t;

    scanf("%d", &t);

    int  n;

    for(int i = 0; i<t; i++)
    {
        scanf("%d", &n);
        long long int arr[n];

        for(int i=0; i<n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        long long int num = minimum_operation(arr, n);
        printf("%lld\n", num);
    }

    return 0;
}





