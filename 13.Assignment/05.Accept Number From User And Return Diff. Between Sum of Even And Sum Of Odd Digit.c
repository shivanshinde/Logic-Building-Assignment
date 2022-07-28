#include<stdio.h>
#include<conio.h>

int DiffEvenOdd(int);

int main()
{
    int No = 0,Ans = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    Ans = DiffEvenOdd(No);

    printf("\n\t Difference Between Even Digit Sum And Odd Digit Sum Is => %d",Ans);

    getch();
    return 0;
}
int DiffEvenOdd(int Num)
{
    int E_Sum = 0,O_Sum = 0,Diff = 0,Dig = 0;

    if(Num < 0)
    {
        Num = -Num;
    }

    while(Num > 0)
    {
        Dig = Num % 10;
        Num = Num / 10;

        if(Dig % 2 == 0)
        {
            E_Sum = E_Sum + Dig;
        }
        else
        {
           O_Sum = O_Sum + Dig;
        }
    }
    Diff = E_Sum - O_Sum;

    printf("\n\t %d - %d",E_Sum,O_Sum);

    return Diff;
}
