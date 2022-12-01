#include<stdio.h>

//problem set 1
//int main()
//{
//    int i,n;
//    scanf("%d",&n);
//
//    int arr[n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for(i=n-1; i>=0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


// problem set - 2

//int main()
//{
//    int index,n;
//    scanf("%d", &n);
//
//    int arr[n];
//
//    for(index = 0; index<n; index++)
//    {
//        scanf("%d", &arr[index]);
//    }
//
//    int  q, i, v;
//
//    scanf("%d", &q);
//
//    for(index = 1; index <= q; index++)
//    {
//        scanf("%d %d", &i, &v);
//        arr[i] += v;
//    }
//
//    for(index=0; index<n; index++)
//    {
//        printf("%d ", arr[index]);
//    }
//    return 0;
//}



//problem - 3


//int main()
//{
//    int  i,j,n;
//    scanf("%d", &n);
//
//    int arr[n], match = 1;
//
//    for(i=0; i<n;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for(i = 0; i<1; i++)
//    {
//        for(j=1; j<n; j++)
//        {
//            if(arr[i] != arr[j])
//            {
//                printf("No");
//                break;
//            }
//            else
//            {
//                match += 1;
//            }
//        }
//    }
//
//    if(match == n)
//    {
//        printf("Yes");
//    }
//    return 0;
//}


////problem - 4
//
//int main()
//{
//    int i, n;
//
//    scanf("%d", &n);
//
//    int arr[n];
//    for(i=0; i<n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int j;
//
//    for(i=0; i<n; i++)
//    {
//        printf("%d - ", arr[i]);
//        for(j=0; j<n; j++)
//        {
//            if(i != j)
//            {
//                printf("%d ", arr[j]);
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//
//}

//problem - 5
//
//int main()
//{
//    int i, n;
//
//    scanf("%d", &n);
//
//    int arr[n];
//    for(i=0; i<n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int  target;
//
//    scanf("%d", &target);
//
//    for(i=0; i<n; i++)
//    {
//        if(target == arr[i])
//        {
//            printf("No");
//            break;
//        }
//        if(i == n-1 && target != arr[i])
//        {
//            printf("Yes");
//        }
//    }
//    return 0;
//}


//problem - 6

int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1; j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
