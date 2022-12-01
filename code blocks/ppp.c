#include<stdio.h>

int main()
{
 int i,num,count=0;
    scanf ("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
             count = count + 1;
        }
    }
    if (count == 0)
    {
          printf ("Prime\n");
    }
    else
    {
           printf ("Composite\n");
    }
    return 0;
}

