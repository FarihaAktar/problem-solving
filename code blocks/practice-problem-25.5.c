#include<stdio.h>




//problem - 2
//
//int sort_array(int arr[1000], int size);
//
//int find_largest_value(int arr[1000], int size, int p);
//int find_smallest_value(int arr[1000], int size, int p);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    int newArr[n];
//
//    for(int i = 0; i< n; i++)
//    {
//        scanf("%d", &newArr[i]);
//    }
//    int k;
//    scanf("%d", &k);
//
//    int largest = find_largest_value(newArr, n, k);
//    int smallest = find_smallest_value(newArr, n, k);
//
//    printf("4th largest element = %d\n", largest);
//    printf("4th smallest element = %d\n", smallest);
//    return 0;
//}
//
//
//int sort_array(int arr[1000], int size)
//{
//    for(int i = 0; i<size; i++)
//    {
//        for(int j = i + 1; j <size; j++)
//        {
//            if(arr[i] > arr[j])
//            {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//
////    for(int i = 0; i< size; i++)
////    {
////        printf("%d", arr[i]);
////    }
//}
//
//
//int find_largest_value(int arr[1000], int size, int p)
//{
//    sort_array(arr, size);
//
//    return arr[size - p];
//}
//
//
//int find_smallest_value(int arr[1000], int size, int p)
//{
//
//    sort_array(arr, size);
//
//    return arr[p - 1];
//}


//problem - 3

//int is_power_of_two(char s[1000])
//{
//    int sum = 0;
//    int letter[27];
//
//    for(int i= 1; i<=26; i++)
//    {
//        letter[i] = 0;
//    }
//    for(int i =0; i<strlen(s); i++)
//    {
//        letter[(s[i] -'a') + 1]++;
//    }
//
//    for(int i = 1; i<= 26; i++)
//    {
////        printf("%d \n", letter[i]);
//        if(letter[i] > 0)
//        {
//            sum += i * letter[i];
//        }
//    }
//
//    int n = sum;
//    int power = 0;
//
//    while(n != 1)
//    {
////        printf("%d\n", n);
//        if(n % 2 != 0)
//        {
//            return 0;
//        }
//        else
//        {
//            n = n/2;
//            power++;
//        }
//
//    }
//    return power;
//}
//
//int main()
//{
//    char str[1000];
//
//    scanf("%s", str);
//
//    int n = is_power_of_two(str);
//    if(n == 0)
//    {
//        printf("NO\n");
//    }
//    else
//    {
//        printf("YES\n");
//        printf("cost = 2^%d", n);
//    }
//    return 0;
//}


//problem - 4


//void recursion(int x)
//{
//    if(x == 0)
//    {
//        return;
//    }
//    printf("%d ", x);
//    recursion(x - 1);
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    recursion(n);
//    return 0;
//}



//problem - 5

//int recursion(int x)
//{
//    if(x)
//    {
//        return x + recursion(x - 1);
//    }
//    return 0;
//
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    int sum = recursion(n);
//    printf("%d", sum);
//}



//problem - 6

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int* x;
    int* y;
    int* z;

    x = &a;
    y = &b;
    z = &c;

    int sum = *x + *y + *z;
    printf("%d", sum);
}





















