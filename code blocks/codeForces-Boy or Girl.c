#include<stdio.h>

int main()
{
    char name[] = "";

    scanf("%s",&name);

    int i,size=0;


//    while (name[size] != '\0')
//        size++;

for(i=0;i<5;i++)
{
    printf("%s", name[i]);
}

//    for(i=0; i<size; i++)
//    {
//        for(j=i+1; j<size;j++)
//        {
//            if(name[i]==name[j])
//            {
//                for(k=j; k<size-1; k++)
//                {
//                    name[k] = name[k + 1];
//                }
//                j--;
//                size--;
//            }
//        }
//    }


//    printf("%d", size);

    return 0;
}
