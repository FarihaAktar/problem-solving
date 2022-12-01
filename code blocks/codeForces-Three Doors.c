#include<stdio.h>

int opened_three_doors(int x, int arr[4]);

int main()
{
    int t;
    scanf("%d", &t);

    int key, j;
    int doors[4];
    for(int i=0; i<t; i++)
    {
        scanf("%d", &key);

        for(j=1; j<=3; j++)
        {
            scanf("%d", &doors[j]);
        }

        opened_three_doors(key, doors);

    }

    return 0;


}

int opened_three_doors(int x, int arr[4])
{
    int sum = 0;
    sum += x;
    for(int k=1; k<=3; k++)
    {
        if(arr[x] > 0)
        {
            sum += arr[x];
            x = arr[x];
        }
        else if(arr[x] == 0)
        {
            break;
        }
    }

    if(sum == 6)
    {
        printf("YES\n");
        return 0;
    }
    else
    {
        printf("NO\n");
        return 0;
    }

    return 0;
}
