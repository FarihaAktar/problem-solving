#include<stdio.h>

int main()
{
    int x, y;
    printf("Please enter two input: ");
    scanf("%d %d", &x, &y);

    if(x > y)
    {
        printf("x is larger.");
    }
    else
    {
        if(x < y)
        {
            printf("y is larger.");
        }
        else
        {
            printf("They are equal.");
        }
    }
    return 0;

}
