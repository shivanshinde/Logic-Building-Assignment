#include<stdio.h>
#include<conio.h>

void OddDisplay(int);

int main()
{
    int No = 0;

    printf("\n\t Enter Any Number =>  ");
    scanf("%d",&No);

    OddDisplay(No);

    return 0;
}

void OddDisplay(int Num)
{
    int i = 0;

    for(i = 1;i <= Num;i++)
    {
        if(i % 2 == 1 && i <= Num)
        {
             printf("\n\t %d",i);
        }
    }
    getch();
    return 0;
}
