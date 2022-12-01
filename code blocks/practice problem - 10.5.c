#include<stdio.h>
#include <math.h>

// problem- 1(Fibonacci sequence)
//int main()
//{
//    int n;
//    scanf("%d",&n);
//
//    int i,arr[n];
//
//
//    for(i=0; i<=n-1;i++)
//    {
//       if(i == 0)
//       {
//           arr[i] = 0;
//           printf("%d ", arr[i]);
//       }
//       else if(i == 1)
//       {
//           arr[i] = 1;
//           printf("%d ", arr[i]);
//       }
//       else
//       {
//           arr[i] = arr[i - 1] + arr[i - 2];
//           printf("%d ", arr[i]);
//       }
//
//    }
//    return 0;
//}



//problem - 2

//int main()
//{
//    int i,j,n;
//
//    scanf("%d",&n);
//
//    int arr[n];
//
//    for(i=0; i<n;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for(i= 0; i< n; i++)
//    {
//        for(j=0; j<n;j++)
//        {
//            int temp = 0;
//
//            if(i != j && arr[i] > arr[j])
//            {
////                printf("%d %d\n", arr[i], arr[j]);
//                temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
////                printf("arr[i]=%d  arr[j]=%d\n", arr[i], arr[j]);
//            }
//        }
//    }
//
//    for(i=n-1;i>=0;i--)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}


//problem -3
//
//int main()
//{
//    int n, i, input, sum = 0;
//    scanf("%d", &n);
//
//    for(i=1;i<=n;i++)
//    {
//        scanf("%d",&input);
//        if(input % 2 != 0)
//        {
//            sum += input;
//        }
//    }
//
//    if(sum % 2 == 0)
//    {
//        printf("Yes");
//    }
//    else
//        printf("No");
//
//
//    return 0;
//}


//problem - 5

//int main()
//{
//    int n, i;
//    scanf("%d", &n);
//
//    int arr[n];
//
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//
//    int j, com, prime = 0;
//    int newArr[1000];
//
//    for(i=0;i<n;i++)
//    {
//        com = 0;
//        for(j=2; j<= sqrt(arr[i]);j++)
//        {
//            if(arr[i] % j == 0)
//            {
//                com +=1;
//                break;
//            }
//        }
////        printf("%d", com);
//        if(com == 0)
//        {
//            prime += 1;
//            newArr[prime] = arr[i];
//        }
//    }
//
//    printf("%d\n", prime);
//    for(i=1; i<=prime; i++)
//    {
//        printf("%d ", newArr[i]);
//    }
//    return 0;
//}


//problem - 6

//int main()
//{
//    int i, j, n;
//    scanf("%d", &n);
//
//    for(i=0;i<n;i++)
//    {
//        for(j=1; j<=n - i;j++)
//        {
//            printf("%d ",j);
//        }
//        printf("\n");
//    }
//    return 0;
//}
