#include<stdio.h>
#include<conio.h>

int Multiply(int,int,int);

int main()
{
    int No1 = 0,No2 = 0,No3 = 0,Ans = 0;

    printf("\n\t Enter Three Numbers =>  ");
    scanf("%d%d%d",&No1,&No2,&No3);

    Ans = Multiply(No1,No2,No3);

    printf("\n\t Multiplication Of Three Number Is => %d ",Ans);

    getch();
    return 0;
}

int Multiply(int Num1,int Num2,int Num3)
{
    int Ret = 0;

    Ret = Num1 * Num2 * Num3;
    return Ret;
}
