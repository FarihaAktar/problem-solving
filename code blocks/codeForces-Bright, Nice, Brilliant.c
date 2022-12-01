#include<stdio.h>

void torch_the_pyramid(int n)
{
    for(int j = 1; j<=n; j++)
    {
        for(int i = 1; i<=j; i++)
        {
            if(i == 1)
            {
                printf("%d ",1);
            }
            else if(i != 1 && i == j)
            {
                printf("%d ",1);
            }
            else
            {
                printf("%d ", 0);
            }
        }
        printf("\n");
    }

}
int main()
{
    int t;
    scanf("%d",&t);
    int x;
    for(int i=0; i<t; i++)
    {
        scanf("%d", &x);
        torch_the_pyramid(x);
    }
    return 0;
}
