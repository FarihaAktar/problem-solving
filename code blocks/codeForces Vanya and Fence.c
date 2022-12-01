#include<stdio.h>

int main()
{
    int i, v, f, h, output = 0;

    scanf("%d %d",&v, &f);

    for(i = 1; i <= v; i++)
    {
        scanf("%d", &h);
        if(h <= f)
        {
            output += 1;
        }
        else
        {
            output += 2;
        }
    }

    printf("%d", output);

    return 0;
}

