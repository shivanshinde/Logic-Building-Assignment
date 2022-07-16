#include<stdio.h>
#include<conio.h>

void DisplayEvenFactors(int No);

int main()
{
    int Num = 0;

    printf("\n Enter Number =>  ");
    scanf("%d",&Num);

    DisplayEvenFactors(Num);

    return 0;
}

void DisplayEvenFactors(int No)
{
    int i = 0;

    if(No <= 0)
    {
        No = -No;
    }

    for(i = 1;i <= No;i++)
    {
        if(No % i == 0 && i % 2 == 0 && No != i)
        {
            printf(" %d",i);
        }
    }
    getch();
}

