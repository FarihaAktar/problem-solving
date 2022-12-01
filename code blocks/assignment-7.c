#include<stdio.h>
#include <math.h>

//int main()
//{
//    int i, n, square, isComposite = 0;
//    scanf("%d", &n);
//
//    square = sqrt(n);
//
//    for(i=2; i<=square; i++)
//    {
//        if(n % i == 0)
//        {
//            isComposite += 1;
//            break;
//        }
//    }
//
//    if(isComposite > 0)
//    {
//        printf("Composite");
//    }
//    else
//    {
//        printf("Prime");
//    }
//    return 0;
//}

//int main()
//{
//    int i,n;
//    scanf("%d", &n);
//
//        for(i=1; i<=n; i++)
//        {
//            if(n % i == 0)
//            {
//                printf("%d ", i);
//            }
//        }
//
//    return 0;
//}




//int main()
//{
//    int n1, n2, temp;
//
//    int temp1 = 0, temp2 = 0,lcd = 0;
//
//    scanf("%d %d",&n1, &n2);
//
//    temp1 = n1;
//    temp2 = n2;
//    if(n2 > n1)
//    {
//        while(n2 % n1 != 0)
//        {
//            temp = n1;
//            n1 = n2 % n1;
//            n2 = temp;
//        }
//    }
//    else
//    {
//        while(n1 % n2 != 0)
//        {
//            temp = n2;
//            n2 = n1 % n2;
//            n1 = temp;
//        }
//    }
//    if(n2 > n1)
//    {
//        lcd = (temp1 * temp2)/ n1;
//        printf("%d",lcd);
//
//    }
//    else
//    {
//        lcd = (temp1 * temp2)/ n2;
//        printf("%d", lcd);
//    }
//
//    return 0;
//}


//int main()
//{
//    int num1, num2, mod;
//    if(num1 > num2){
//        while( num1 % num2 != 0)
//        {
//           mod = num1 % num2;
//
//
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int first, second;
//
//    printf("Enter the first number: ");
//    scanf("%d", &first);
//        printf("Enter the second number: ");
//    scanf("%d", &second);
//
//    if(first == 0 || second == 0)
//    {
//        printf("None of them are divisible by the other.");
//    }
//    else if(first % second == 0)
//    {
//        printf("The first number is divisible by the second number.");
//    }
//    else if(second % first == 0)
//    {
//        printf("The second number is divisible by the first number.");
//    }
//    else
//    {
//        printf("None of them are divisible by the other.");
//    }
//    return 0;
//}


//int main()
//{
//    int n;
//    scanf("%d",&n);
//    printf("%d, ", n);
//    while(n != 1)
//    {
//        if(n % 2 == 0)
//        {
//            n = n / 2;
//        }
//        else if(n % 2 != 0)
//        {
//            n -= 1;
//        }
//        if(n == 1){
//            printf("%d", n);
//        }
//        else
//        {
//            printf("%d, ", n);
//        }
//    }
//    return 0;
//}

//int main()
//{
//    long long int input, sum = 0;
//    scanf("%I64d", &input);
//
//    while(input / 10 != 0)
//    {
//        sum += input % 10;
//        input = input / 10;
//        if(input / 10 == 0)
//        {
//            sum += input;
//        }
//    }
//
//    printf("%I64d", sum);
//    return 0;
//}


//int main ()
//{
//    long long int input, test;
//    scanf("%I64d", &input);
//
//    int i = 0;
//    while(input / 10 != 0)
//    {
//        i += 1;
//        input = input / 10;
//    }
//
//    printf("%d digits", i + 1);
//    return 0;
//}

//int main ()
//{
////    code start
//    long long int input, largest = 0, smallest;
//    int i;
//
//    for(i= 1; i <= 4; i++)
//    {
//        scanf("%I64d", &input);
//        if(input > largest)
//        {
//            largest = input;
//        }
//        if(i == 1)
//        {
//            smallest = input;
//        }
//        if(i > 1 && input < smallest)
//        {
//            smallest = input;
//        }
//    }
//
////    Code End
//
//    printf("Largest = %d\nSmallest = %d", largest, smallest);
//
//
//    return 0;
//}

//int main()
//{
//    int a = 5, b = 13;
//
//    int temp, temp2;
//    temp2 = b;
//    temp = a;
//
//    b = temp;
//    a = temp2;
//    printf("%d and %d", a, b);
//
//    return 0;
//}
