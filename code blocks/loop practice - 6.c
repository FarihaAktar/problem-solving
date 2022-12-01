#include<stdio.h>

int main()
{
    int plasticPaper, chocolate;
    printf("Please enter wrapper amount: ");

    scanf("%d", &plasticPaper);

    chocolate = plasticPaper;
    while(plasticPaper >= 4)
    {

        chocolate += plasticPaper / 4;
        plasticPaper = (plasticPaper / 4) + (plasticPaper % 4);

    }


    printf("Total : %d", chocolate);

    return 0;

}
