#include<stdio.h>

int main()
{
  //  long long int n;

  //  scanf("%lld", &n);

 //   while(n >1)
 //   {
    //    printf("%lld ",n);

    //    if(n%2 ==0)
     //   {
      //      n= n/2;
     //   }
     //   else
      //  {
    //        n = 3*n+1;
    //    }
    //}
   // printf("%lld\n", n);

     int i=0;
    for (i=0; i<8; i++)
    {
        int s = i % 4;
        printf("i = %d %d\n",i, s);

        if (i%4)
        {
            printf("Phitron\n");
        }
    }

    return 0;
}
