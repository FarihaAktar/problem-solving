#include<stdio.h>

int beat_the_odd(int n, int arr[n]);

int main()
{
    int t;
    scanf("%d", &t);

    int n, j;

    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        int arr[n];
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[j]);
        }

        int removed = beat_the_odd(n, arr);
        printf("%d\n", removed);

    }

    return 0;


}


int beat_the_odd(int n, int arr[n])
{
    int odd = 0;
    int even = 0;
    for(int j=0; j<n ; j++)
    {
        if(arr[j] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if(even <= odd)
    {
        return even;
    }
    else {
        return odd;
    }

}


//
//        if((arr[j] + arr[j + 1]) % 2 != 0)
//        {
//            odd++;
//            if(j + 2 < n && arr[j] % 2 == 0 && arr[j + 2] % 2 == 0 && arr[j + 1] % 2 != 0)
//            {
//                arr[j + 1] = arr[j];
//            }
//            else if(j + 2 < n && arr[j] % 2 != 0 && arr[j + 2] % 2 != 0 && arr[j + 1] % 2 == 0)
//            {
//                arr[j + 1] = arr[j];
//            }
//            else if(j + 2 < n && arr[j + 1] % 2 == 0 && arr[j + 2] % 2 == 0 && arr[j] % 2 != 0)
//            {
//                continue;
//            }
//              else if(j + 2 < n && arr[j + 1] % 2 != 0 && arr[j + 2] % 2 != 0 && arr[j] % 2 == 0)
//            {
//                continue;
//            }
//        }
