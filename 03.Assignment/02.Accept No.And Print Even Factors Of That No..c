#include<stdio.h>
#include<conio.h>

void DisplayFactor(int);

int main()
{
    int No = 0;

    printf("\n Enter Number => ");
    scanf("%d",&No);

    DisplayFactor(No);
    return 0;
}
void DisplayFactor(int No)
{
    int i = 0;

    if(No <= 0)
    {
        No = -No;
    }

    for(i = 1;i <= No;i++)
    {
        if(No % i == 0 && No != i && i % 2 == 0 || i == 1 )
        {
                printf(" %d ",i);
        }
    }
    getch();
}
