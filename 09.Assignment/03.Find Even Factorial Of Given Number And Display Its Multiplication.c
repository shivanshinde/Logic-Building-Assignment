#include<stdio.h>
#include<conio.h>

int EvenFactorial(int);

int main()
{
    int No = 0,Ret = 0;

    printf("\n\t Enter Any Number =>  ");
    scanf("%d",&No);

    Ret =  EvenFactorial(No);

    printf("\n\t Even Factorial Multiplication Is => %d ",Ret);

    getch();
    return 0;
}
int EvenFactorial(int Num)
{
    int Ans = 1,i = 0;

    for(i = 1;i <= Num;i++)
    {
        if(i % 2 == 0)
        {
            Ans = Ans * i;
        }
    }

    return Ans;
}
