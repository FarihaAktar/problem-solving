#include<stdio.h>

int main()
{
    int i, passenger, sum = 0, weight;

    printf("Please enter the number of passengers: ");

    scanf("%d", &passenger);

    for(i = 1; i <= passenger; i++)
    {
        printf("Please enter the weight of passenger %d : ", i);
        scanf("%d", &weight);
        sum += weight;
    }

    printf("Total weight of the passengers are: %d", sum);

    return 0;
}
