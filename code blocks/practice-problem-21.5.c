#include<stdio.h>

int num(int x);

int main()
{
    int n;
    scanf("%d", &n);

    num(n);
    return 0;
}

int num(int x)
{
    if(x> 0)
    {
        for(int i = x; i>= -(x); i--)
        {
            printf("%d ", i);
        }
    }
    else if(x<0)
    {
          for(int i = x; i<= -1*(x); i++)
        {
            printf("%d ", i);
        }

    }
}
