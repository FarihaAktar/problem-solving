#include<stdio.h>


int main()
{
    char str[105];

    fgets(str,sizeof(str), stdin);
//    scanf("%s", str);

    int i = 0;
    for(i=0;i<strlen(str)-1;i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
           if(!(str[i] == 'a' || str[i] == 'y' || str[i] == 'e' ||  str[i] == 'u' ||  str[i] == 'i' || str[i] == 'o'))
        {
            printf(".%c", str[i]);
        }

    }

    return 0;
}
