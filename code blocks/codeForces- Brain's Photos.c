#include<stdio.h>

int main()
{
    int n,m;

    scanf("%d %d", &n, &m);

    int i, j;

    char arr[100];

    for(i=0;i<n * m;i++)
    {
       scanf("%d", &arr[i]);
    }

    for(i= 0; i<n;i++)
    {
        printf("%c", arr[i]);
    }

//    int color = 0;
//    for(i=0;i<n;i++)
//    {
//        for(j=0; j<m;j++)
//        {
//            if(arr[i][j] == "C" || arr[i][j]== "M" || arr[i][j]== "Y")
//            {
//                printf("#Color");
//                color += 1;
//                break;
//            }
//        }
//    }
//
//    if(color == 0)
//    {
//        printf("#Black&White");
//    }
    return 0;
}
