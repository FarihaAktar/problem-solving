#include<stdio.h>






void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        printf("%d ",n);
    }
}


int main()
{
//    int x, y, z;
//    printf("Please enter three integer value: ");
//
//    scanf("%d %d %d", &x, &y, &z);
//
//   printf("x = %d , y = %d, z = %d\n", x, y, z);
//
//   if(x > y)
//   {
//       if(x > z)
//       {
//           printf("x is bigger!");
//       }
//       else
//       {
//           printf("z is bigger!");
//       }
//   }
//   else
//   {
//       if(y > z)
//       {
//           printf("y is bigger!");
//       }
//       else
//       {
//           printf("z is bigger!");
//       }
//   }
//   int array[2][3]= {{10,20,30},{40,50,60}},i=1,j=0;
//    array[i][j]=array[j][i];
//    printf("%d,%d",array[i][j],array[j+1][i+1]);


    int x=4;
    fun(x);

    return 0;
}



