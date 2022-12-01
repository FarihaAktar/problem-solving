#include<stdio.h>

int main()
{
    int arr[1001];

    int num = 1;

    for(int i= 1;i<= 1000;)
    {
        if(num % 3 == 0 || num % 10 == 3)
        {
            num++;
        }
        else
        {
            arr[i] = num;
            i++;
            num++;
        }
    }

    int t,k;

    scanf("%d", &t);

    for(int i = 1; i<=t; i++)
    {
        scanf("%d", &k);

        printf("%d\n", arr[k]);
    }

    return 0;
}
