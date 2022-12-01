#include<stdio.h>
int main()
{
    int x, steps = 0;

    scanf("%d", &x);
    steps = (x/5) + (x%5 != 0);
    printf("%d", steps);

    return 0;
}


//    if(x % 5 == 0)
//    {
//        steps = x / 5;
//    }
//    else
//    {
//        steps = (x/5) + 1;
//    }
