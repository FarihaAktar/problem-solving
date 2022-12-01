#include<stdio.h>

//int main()
//{
//    char str[1000];
//
//    scanf("%s", str);
//
//    for(int i=0; i<strlen(str); i++)
//    {
//
//        if(str[i] >= 'a' && str[i]<= 'z')
//        {
//            printf("%c", toupper(str[i]));
//        }
//        else if(str[i] >= 'A' && str[i]<= 'Z')
//        {
//            printf("%c", tolower(str[i]));
//        }
//    }
//    return 0;
//}


//int thrice (char arr[1000]);
//
//int main()
//{
//    char str[1000];
//
//    scanf("%s", str);
//    thrice(str);
//
//    return 0;
//}
//
//
//
//int thrice (char arr[1000])
//{
//    char ch = '1';
//    int found = 0;
//    for(int i=1; i<=3; i++)
//    {
//        for(int j=0; j<strlen(arr); j++)
//        {
//            if(arr[j] == ch)
//            {
////                printf("%c %c\n", arr[j], ch);
//                found++;
//                break;
//            }
//        }
//        if(ch == '1')
//        {
//            ch = '9';
//        }
//        else if(ch == '9' && i == 2)
//        {
//            ch = '7';
//        }
//    }
//
//    if(found == 3)
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//    }
//    return 0;
//}

//
//
//int main()
//{
//    int n, k;
//
//    scanf("%d %d",&n, &k);
//
//    int arr[n +1];
//
//    int j =1;
//    for(int i =1; i<=n; i++)
//    {
//        if(i % 2 == 0)
//        {
//            arr[j] = i;
//            j++;
//        }
//    }
//
//
//
//    for(int i = 1 ; i<=n; i++)
//    {
//        if(i % 2 != 0)
//        {
//            arr[j] = i;
//            j++;
//        }
//    }
//
//    for(int i = 1; i<=n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    printf("\n");
//    printf("The %dth element in this sequence is %d.\n",k,arr[k]);
//
//    return 0;
//}



//int add_three_nums(int a, int b, int c);
//
//int main()
//{
//    add_three_nums(5, 5, 0);
//
//
//    return 0;
//}
//
//
//int add_three_nums(int a, int b, int c)
//{
//    return a + b + c;
//}

//int factorial_of_num(int a);
//int ratio_of_two_factorials(int a, int b);
//
//int main()
//{
//    int res = ratio_of_two_factorials(4, 3);
//
//    printf("%d", res);
//    return 0;
//}
//
//int factorial_of_num(int a)
//{
//    int fac = 1;
//    for(int i = 1; i<=a; i++)
//    {
//        fac *= i;
//    }
//
//    return fac;
//}
//
//
//int ratio_of_two_factorials(int a, int b)
//{
//    int r = factorial_of_num(a) / factorial_of_num(b);
//
//    return r;
//}


//
//int find_median(int arr[1000]);
//
//int main()
//{
//    int n;
//    printf("Enter the number of elements: ");
//    scanf("%d",&n);
//
//    int nums[n];
//
//    for(int i = 0; i<n; i++)
//    {
//        scanf("%d", &nums[i]);
//    }
////    for(int i = 0; i<n; i++)
////    {
////        printf("%d", nums[i]);
////    }
//
//    find_median(nums);
//    return 0;
//}
//
//
//
//int find_median(int arr[])
//{
//    int len = 0;
//    len = sizeof(arr) / sizeof(arr[0]);
//
//    printf("%d",len);
//    return 0;
//}

//
//int main()
//{
//    char str[1000];
//    int n;
//
//    scanf("%s", str);
//    scanf("%d", &n);
//
//    for(int i = 0; i< strlen(str); i++)
//    {
//        if(str[i] + n > 122)
//        {
//           int r = n - (122 - str[i]);
//           int s = (str[i] - (str[i] - 97)) + (r - 1);
//           printf("%c", s);
//        }
//        else
//        {
//
//            printf("%c", str[i] + n);
//        }
//    }
//    return 0;
//}








//int main()
//{
//    int arr[3][3];
//
//    for(int i = 0; i<3; i++)
//    {
//        for(int j = 0; j<3; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    int newArr[3][3];
//
//    for(int i = 0; i<3; i++)
//    {
//        for(int j = 0; j<3; j++)
//        {
//            newArr[j][i] = arr[i][j];
//
//        }
//    }
//
//
//
//    for(int i = 0; i<3; i++)
//    {
//        for(int j = 0; j<3; j++)
//        {
//            printf("%d ",  newArr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}



//char return_grade(int mark);
//
//
//int main()
//{
//    int m;
//    scanf("%d",&m);
//    char res = return_grade(m);
//
//    printf("%c\n", res);
//    return 0;
//}
//
//
//char return_grade(int mark)
//{
//    if(mark >=80 && mark <=100)
//    {
//        return 'A';
//    }
//    else if(mark >=60 && mark <= 79)
//    {
//        return 'B';
//    }
//     else if(mark >=40 && mark <= 59)
//    {
//        return 'C';
//    }
//    else if(mark >=0 && mark <= 39)
//    {
//        return 'F';
//    }
//}













int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int nums[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int res = func(n, nums);

    printf("%d", res);
    return 0;
}



int func(int s, int arr[s])
{
    int temp;
    for(int i = 0; i<s; i++)
    {
        for(int j=i+1; j<s; j++)
        {

            if (arr[i] > arr[j])
            {

                temp =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }

//    for (int i = 0; i < s; ++i)
//        printf("%d\n", arr[i]);
    if(s % 2 != 0)
    {
        return arr[s / 2];
    }
    else
    {
        return (arr[(s/2)] + arr[s/2 - 1]) / 2;
    }
}































