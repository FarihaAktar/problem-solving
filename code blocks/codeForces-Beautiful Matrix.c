#include<stdio.h>

int main()
{
    int i, j;

    int arr[5][5];


    for(i = 0; i<5; i++ )
    {
        for(j=0; j<5 ; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int move = 0, position = 1;

    for(i = 0; i< 5; i++)
    {
        for(j = 0; j <5; j++)
        {
            if(arr[i][j] == 1)
            {
                move = abs(i - 2) + abs(j - 2);
                break;
            }

        }
    }

    printf("%d", move);

    return 0;
}
