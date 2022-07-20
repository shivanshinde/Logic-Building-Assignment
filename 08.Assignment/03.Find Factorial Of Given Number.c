#include<stdio.h>
#include<conio.h>

int Factorial(int);

int main()
{
    int No = 0,Ans = 0;

    printf("\n\t Enter Any Number =>  ");
    scanf("%d",&No);

    Ans = Factorial(No);

    printf("\n\t Factorial Of Number Is %d",Ans);
    getch();
    return 0;
}
int Factorial(int Num)
{
    int Fact = 1,i = 0;

    for(i = 1;i <= Num;i++)
    {
        Fact = Fact * i;
    }

    return Fact;
}
