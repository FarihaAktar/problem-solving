#include<stdio.h>

int main()
{
    long long int num;
    scanf("%lld", &num);

    long long int i, missingNum, newNum, sum = 0;


    for(i=1; i< num; i++)
    {
        scanf("%lld", &newNum);
        sum += newNum;
    }


    missingNum = (num*(num+1))/2 - sum;

    printf("%lld", missingNum);
    return 0;
}
