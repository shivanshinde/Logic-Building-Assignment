#include<stdio.h>
#include<conio.h>

int EvenOddFact(int);

int main()
{
    int No = 0,Ans = 0;

    printf("\n\t Enter Any Number =>  ");
    scanf("%d",&No);

    Ans =  EvenOddFact(No);

    printf("\n\t Difference Between Of Odd And Even Multiplication Is => %d ",Ans);

    getch();
    return 0;
}
int EvenOddFact(int Num)
{
    int Odd = 1,Even = 1,i = 0,Ret = 0;

    for(i = 1;i <= Num;i++)
    {
        if(i % 2 == 0)
        {
            Even = Even * i;
        }
        else
        {
            Odd = Odd * i;
        }
    }
     Ret = Even - Odd;

     return Ret;
}
