#include<stdio.h>

//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if(n > 0)
//    {
//        for(int i = n; i>= -n; i--)
//        {
//            printf("%d ", i);
//        }
//    }
//    if(n < 0)
//    {
//        int x = abs(n);
////        printf("%u", x);
//        for(int i = n; i<= x; i++)
//        {
//            printf("%d ", i);
//        }
//    }
//
//    return 0;
//}

//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    for(int i=0; i<n; i++)
//    {
//        for(int j = 1; j<(n+n-i); j++)
//        {
//            if(j >= (n - i))
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}




//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    int arr[n];
//
//    for(int i =0; i<n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int sum = 0;
//
//    for(int j =0; j<n; j++)
//    {
//        sum += arr[j] % 10;
//    }
//
//
//
//    printf("%d", sum);
//
//    return 0;
//}


//
//int main()
//{
//    char s[100];
//
//    scanf("%s", s);
//
//    char newArr[100];
//
//   newArr[0] = s[0];
//   int j = 0;
//
//    for(int i = 0; i<strlen(s) - 1; i++)
//    {
//        if(newArr[j] == s[i +1])
//        {
//            continue;
//        }
//        else
//        {
//            j++;
//            newArr[j] = s[i + 1];
////            printf("j= %d %c\n", j, newArr[j]);
//        }
//    }
////    printf("%d", strlen(s));
//
//    newArr[j + 1] = '\0';
//
//    for(int k = 0; k<strlen(newArr); k++)
//    {
//        printf("%c", newArr[k]);
//    }
//    return 0;
//}




//int main()
//{
//    char op;
//
//    scanf("%c", &op);
//
////    getchar();
//
//    int a, b;
//
//    scanf("%d %d", &a, &b);
//
//    if(op == 42)
//    {
//        int res = a * b;
//        printf("%d", res);
//    }
//    else if(op == 43)
//    {
//        printf("%d", a + b);
//    }
//    else if(op == 45)
//    {
//        printf("%d", a - b);
//    }
//    else
//    {
//         printf("%d", a / b);
//    }
//
//    return 0;
//}



int main()
{
    int x;

    scanf("%d", &x);

    if(x % 4 == 0)
    {
        printf("YES");
    }
    else if(x % 100 == 0)
    {
        if(x % 400 == 0)
        {
           printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else{
        printf("NO");
    }

    return 0;
}

















































