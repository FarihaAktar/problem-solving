#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//int main() {
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    long long int n;
//
//    scanf("%d", &n);
//
//    int res;
//
//    if(n % 3 == 0)
//    {
//        res = n / 3;
//        printf("%d\n", res);
//    }
//    else{
//        printf("-1\n");
//    }
//    return 0;
//}



//int main() {
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    char signs[22];
//    int a, b;
//
//    scanf("%s", signs);
//    scanf("%d %d", &a, &b);
//
//    int sum = 0;
//
//    for(int i=0; i<strlen(signs); i++)
//    {
//        if(signs[i] == 42)
//        {
//           sum += a * b;
//        }
//        else if(signs[i] == 43)
//        {
//            sum += a + b;
//        }
//    }
//
//    printf("%d\n", sum);
//
////    printf("%d", strlen(signs));
////    printf("%d", signs[0]);
//    return 0;
//}





//int main()
//{
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int r, c;
//    scanf("%d %d", &r, &c);
//
//    int arr[r][c];
//    int i, j;
//
//    for(i =0; i<c; i++)
//    {
//        for(j=0; j<r; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    for(i =0; i<c; i++)
//    {
//        for(j=0; j<r; j++)
//        {
//            if(arr[i][j] == i + 1 && arr[i][j] == j + 1)
//            {
//                arr[i][j] += 3;
//            }
//            else if(arr[i][j] == i + 1 && arr[i][j] != j +1)
//            {
//                arr[i][j] += 2;
//            }
//            else if(arr[i][j] == j + 1 && arr[i][j] != i + 1)
//            {
//                arr[i][j] += 1;
//            }
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}




//int main()
//{
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int t;
//    scanf("%d", &t);
//
//    int i, j;
//    long long int n;
//    int sum =0;
//
//
//    for(i = 0; i< t; i++)
//    {
//        scanf("%lld", &n);
//        char arr[n];
//        scanf("%s", arr);
//
//        sum = 0;
//        for(j =0; j<n - 1; j++)
//        {
//            if(arr[j] == '0' && arr[j+1] == '1')
//            {
//                sum += 1;
//            }
//            else if(arr[j] == '1' && arr[j + 1] == '0')
//            {
//                sum += 1;
//            }
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}


//int main() {
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int n;
//    scanf("%d", &n);
//
//    for(int i = 1; i<= n; i++)
//    {
//        for(int j = i; j <= n + i -1; j++)
//        {
//            if(i == 1)
//            {
//                printf("%d", j);
//            }
//            else if(i != 1 && j == i)
//            {
//                printf("%d", j);
//            }
//            else if(j == n + i -1)
//            {
//                printf("%d", n);
//            }
//            else if(i == n)
//            {
//                printf("%d",n);
//            }
//            else
//            {
//                printf(" ");
//            }
//
//        }
//        printf("\n");
//    }
//    return 0;
//}




int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);

    char arr[n];
    int i;

    scanf("%s",arr);

//    printf("%c", arr[0]);
    long long int plus = 1, minus = 1, plusTemp =0, minusTemp = 0;

    for(i= 0; i<n-1; i++)
    {
//        printf("%c %c\n", arr[i], arr[i+1]);
//        printf("i=%d, arr[%d] = %c, arr[%d + 1] = %c\n", i, i, arr[i], i, arr[i + 1]);
        if(arr[i] == 43 && arr[i + 1] == 43)
        {
            plus += 1;
//            printf("plus:i=%d\n",i);
        }
        else if(arr[i] == 45 && arr[i+1] == 45)
        {
            minus += 1;
//             printf("minus:i=%d\n",i);

        }
        else if(arr[i] == 43 && arr[i + 1] == 45)
        {
            if(plus >= plusTemp)
            {
                plusTemp = plus;
            }
                plus = 1;
        }
        else if(arr[i] == 45 && arr[i + 1] == 43)
        {
            if(minus >= minusTemp)
            {
                minusTemp = minus;
            }
                minus = 1;
        }

    }
    if(minus > minusTemp){
        minusTemp = minus;
    }
    if(plus > plusTemp)
    {
        plusTemp = plus;
    }
//    printf("plus= %d, minus = %d", plusTemp, minusTemp);
    if(plusTemp > minusTemp)
    {
        printf("%lld\n", plusTemp);
    }
    else if(minusTemp > plusTemp)
    {
        printf("%lld\n", minusTemp);
    }
    else if(plusTemp == minusTemp)
    {
           printf("%lld\n", minusTemp);
    }
    return 0;
}





//int main()
//{
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int t;
//    scanf("%d", &t);
//    int i, j, p=0;
//    for(i=0; i<t; i++)
//    {
//        char arr[21], newArr[21];
//        scanf("%s", arr);
//        int k =0;
//
//        for(j =strlen(arr) - 1; j>=0; j--)
//        {
//            newArr[k] = arr[j];
//            k++;
//        }
//        p = 0;
//            for( j =0; j<strlen(arr); j++)
//        {
//            if(arr[j] == newArr[j])
//            {
//                p += 1;
//            }
//        }
//
//        if(p == strlen(arr) && p > 7)
//        {
//            int sum = strlen(arr)-2;
//            printf("Case #2: %c%d%c",arr[0],sum,arr[strlen(arr) - 1]);
//        }
//        else if(p == strlen(arr) && strlen(arr) <= 7)
//        {
//            printf("Case #3: %s", arr);
//        }
//        else if(p != strlen(arr))
//        {
//            printf("Case #1: Not Palindrome");
//        }
//
//        }
//    return 0;
//}





//int main()
//{
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int n;
//    scanf("%d", &n);
//
//    int arr[n];
//    long long int sum = 0, max = 0, maxNum = 0;
//
//    for(int i =0; i<n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for(int i = 0; i<n; i++)
//    {
//        if(arr[i] > maxNum && arr[i] % 2 == 0)
//        {
//            maxNum = arr[i];
//        }
//        for(int j = i + 1; j <n; j++)
//        {
//
//            sum = arr[i] + arr[j];
//            if(sum % 2 == 0 && sum > max)
//            {
//                max = sum;
//            }
//            sum = 0;
//        }
//    }
//    if(n == 1 && arr[0] % 2 == 0)
//    {
//        max = arr[0];
//    }
//    if(maxNum > max)
//    {
//        max = maxNum;
//    }
//
//    printf("%lld\n", max);
//    return 0;
//}











































