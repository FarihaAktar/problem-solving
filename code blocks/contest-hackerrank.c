#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//int main() {
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    char ICC[] = "International Cricket Council";
//
//
//
//for(int i=strlen(ICC) - 1; i>=0; i--)
//{
//    printf("%c", ICC[i]);
//}
//    return 0;
//}



//int main() {
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int x, y;
//
//    scanf("%d %d", &x, &y);
//    int run = 0;
//     run = x - y;
//
//     printf("%d", run);
//
//    return 0;
//}

//
//
//int main() {
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int t;
//    scanf("%d", &t);
//
//    int eng = 0, pak = 0;
//    int n;
//    char input[12];
//
//    for(int i = 0; i<t; i++)
//    {
//        scanf("%d", &n);
//        eng = 0;
//        pak = 0;
//
//        for(int j = 0 ; j <=n ;j++)
//        {
//            scanf("%c", &input[j]);
//
//        }
//
//
//        for(int k = 0; k< n; k++)
//        {
//            if(input[k] == 'H')
//            {
//                eng += 1;
//            }
//            else
//            {
//                pak += 1;
//            }
//        }
//
//        if(eng > pak)
//        {
//            printf("England\n");
//        }
//        if(pak > eng)
//        {
//            printf("Pakistan\n");
//        }
//    }
//
//    return 0;
//}

//
//int main() {
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int t;
//
//    scanf("%d", &t);
//
//    int n, big = 0, a;
//
//    for(int i = 0; i< t; i++)
//    {
//        scanf("%d", &n);
//        big = 0;
//
//        for(int j = 0; j<n; j++)
//        {
//            scanf("%d", &a);
//            if(a > big)
//            {
//                big = a;
//            }
//        }
//        printf("%d\n", big);
//    }
//    return 0;
//}


//
//
//int main() {
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int t;
//
//    scanf("%d", &t);
//
//    int zero = 0, input;
//
//    for(int i =0; i<t; i++)
//    {
//         zero = 0;
//        for(int j = 0; j< 6; j++)
//        {
//            scanf("%d",&input);
//
//            if(input == 0)
//            {
//                zero += 1;
//            }
//        }
//        if(zero == 6)
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//    }
//    return 0;
//}





int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;

    scanf("%d", &t);

    int n, arr[101];

    int s;
    float y;

    int sqt = 0;

    for(int i = 0; i< t; i++)
    {
        scanf("%d", &n);

        sqt = 0;
        for(int j = 0; j< n; j++)
        {
            scanf("%d", &arr[j]);
            y = sqrt(arr[j]);
            s = y;
            if(s == y)
            {
                sqt++;
            }
        }
        if(sqt > 0)
        {
            printf("%d \n", sqt);
        }
        else
        {
            printf("-1 \n");
        }

    }
    return 0;
}
