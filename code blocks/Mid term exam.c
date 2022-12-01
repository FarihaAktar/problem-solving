#include<stdio.h>
#include <string.h>

//int main()
//{
//    int n = 10;
//    int x = 5;
//    int index = 0;
//    int a[10] = {12, 7, 3, 71, 2, 43, 38, 23, 45, 22};
//    int b[n];
//    for (int i=0; i<n; i++)
//    {
//        //Write Code Here
//        b[i] = a[index] + x;
//        index++;
//        printf("%d ",b[i]);
//    }
//
//    return 0;
//}


//int main()
//{
//    char s = “america”;
//    char s[] = "america";
//
//    printf("%s", s);
//}


//
//int main()
//{
//    int arr[15];
//
//    int x = 2;
//
//    for(int i = 0; i<15; i++)
//    {
//        if(i == 0)
//        {
//            arr[i] = 1;
//        }
//        else
//        {
//            arr[i] = arr[i - 1] * x;
//        }
//    }
//
//    return 0;
//}


//int main()
//{
//    char a[10];
//	a[0] = 98;
//	a[1] = 97;
//	a[2] = 'n';
//	a[3] = 'a';
//	a[4] = 'n';
//	a[5] = 'a';
//	a[6] = '\0';
//
//	printf("%s", a);
//
//    return 0;
//}


//int main()
//{
//    char a[10];
//    char ch = 'a';
//
//
//    int i;
//    for(i = 0; i<8;i++)
//    {
//        a[i] = ch+8-i;
//    }
//    a[8] = '\0';
////
////    for(i =0; i<8; i++)
////    {
////        printf("%c", a[i]);
////    }
//
//    printf("%d", ch);
//    return 0;
//}


//int main()
//{
//    char str1[102], str2[102];
//
//    fgets(str1,sizeof(str1), stdin);
//
//    fgets(str2,sizeof(str2), stdin);
//
//
//    for(int i =0; i<strlen(str1); i++)
//    {
//        if(str1[i]>= 'A' && str1[i] <= 'Z')
//        {
//            str1[i] += 32;
//        }
//
//        if(str2[i]>= 'A' && str2[i] <= 'Z')
//        {
//            str2[i] += 32;
//        }
//    }
//
//
//    int same = 1;
//
//    for(int i =0; i<strlen(str1) - 1; i++)
//    {
//        if(str1[i]< str2[i])
//        {
//            same = 0;
//            printf("%s comes before %s\n", str1, str2);
//            break;
//        }
//        else if(str1[i] > str2[i])
//        {
//            same = 0;
//            printf("%s comes before %s\n", str2, str1);
//            break;
//        }
//    }
//
//    if(same == 1)
//    {
//        printf("%s and %s are same\n", str1, str2);
//    }
//    return 0;
//}



//int main()
//{
//    int arr[11] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
//
//    int temp;
//
//    for(int i=0; i<5; i++)
//    {
//        for(int j=0; j<11 - 1; j++)
//        {
//            if(arr[j]> arr[j+1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j +1] = temp;
//            }
//        }
//    }
//
//    for(int i = 0; i<11; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}


//int main()
//{
//    int input;
//
//    scanf("%d", &input);
//
//    int remainder = 0, total = 0;
//
//    while(input / 10 != 0)
//    {
//        remainder = input % 10;
//        total += remainder;
//        input = input / 10;
//        if(input / 10 == 0)
//        {
//            total += input;
//        }
//    }
//
//    printf("%d", total);
//    return 0;
//}


int main()
{
    int arr[3][3];

    int i, j;
    for(i = 0; i<3; i++)
    {
        for(j = 0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int compare = 0, sum = 0;

    for(i = 0; i<3; i++)
    {
        sum = 0;
        for(j = 0; j<3; j++)
        {
            sum += arr[i][j];

        }
        if(compare == 0)
        {
            compare = sum;
        }
        if(compare != sum && compare != 0)
        {
            printf("NO");
            return 0;
        }
//        printf("\n");
        sum = 0;
        for(int k = 0; k<3; k++)
        {
            sum += arr[k][i];
        }
        if(compare != sum && compare != 0)
        {
            printf("NO");
            return 0;
        }

    }

    sum = 0;
    sum = arr[0][0] + arr[1][1] + arr[2][2];
    if(compare != sum && compare != 0)
    {
        printf("NO");
        return 0;
    }
    sum = 0;
    sum = arr[0][2] + arr[1][1] + arr[2][0];
    if(compare != sum && compare != 0)
    {
        printf("NO");
        return 0;
    }

    if(compare == sum)
    {
        printf("YES");
    }
    return 0;
}
