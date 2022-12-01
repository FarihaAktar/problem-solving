#include<stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    scanf("%d",&input);
    int i,j, sum = 0, total, solved =0;


    for(i=0;i<input;i++)
    {
        total = 0;
        for(j=1; j<=3;j++)
        {
            scanf("%d",&solved);
            total += solved;
        }
//        printf("%d\n", total);
        if(total >= 2)
        {
            sum += 1;
        }
    }

    printf("%d", sum);
    return 0;
}
