#include<stdio.h>

int main()
{
     // practice problem -4
    int i = 1,number, square = 0;
    printf("Please enter the test data: ");
    scanf("%d", &number);

    while(i <= number)
    {
        square = i * i;
        printf("Number is: %d , Square of the %d is : %d\n", i, i, square);
        i++;
    }

    return 0;
}


