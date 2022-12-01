#include<stdio.h>

int safe_rooks(int arr[9][9]);

int main()
{
    int arr[9][9];

    for(int i = 1; i<9; i++ )
    {
        for(int j =1; j< 9; j++)
        {
            arr[i][j] = 0;
        }
    }

    int rooks;

    int row, column;

    scanf("%d", &rooks);
    for(int i= 0; i<rooks; i++)
    {
        scanf("%d %d",&row, &column);
        arr[row][column] = 1;
    }

    safe_rooks(arr);
    return 0;
}

int safe_rooks(int arr[9][9])
{
    int rook1row, rook1column, sum =0;
    int rook2row, rook2column;
    for(int i =1; i<9; i++)
    {
        sum = 0;
        for(int j= 1; j<9; j++)
        {

            if(arr[i][j] > 0 && sum > 0)
            {
                sum++;
                rook2row = i;
                rook2column = j;
            }
            if(arr[i][j] > 0 && sum == 0)
            {
                rook1row = i;
                rook1column = j;
                sum++;
            }

        }
//        printf("%d \n",sum);
        if(sum > 1)
        {
//            printf("%d %d", rook1row, rook1column);
            arr[rook1row][rook1column] = 0;
            arr[rook2row][rook2column] = 0;
        }
    }

    sum = 0;
    for(int i = 1; i<9; i++ )
    {
        for(int j =1; j< 9; j++)
        {
            if(arr[i][j] > 0)
            {
                sum++;
            }
        }
    }
    printf("Safe rooks - %d\n", sum);
    for(int i = 1; i<9; i++ )
    {
        for(int j =1; j< 9; j++)
        {
            if(arr[i][j] > 0)
            {
                printf("%d %d", i, j);
            }
        }
        printf("\n");
    }
    return 0;
}
