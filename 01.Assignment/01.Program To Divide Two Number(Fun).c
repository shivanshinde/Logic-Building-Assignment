#include<stdio.h>
#include<conio.h>

int Div();

int main()
{
        int Num1 = 0,Num2 = 0,Ret = 0;

        printf("\n Enter Two Numbers = ");
        scanf("%d%d",&Num1,&Num2);

        Ret = Div (Num1,Num2);

        printf(" \n Division Of Two Number Is = %d",Ret);

        getch();
        return 0;
}

int Div(int No1,int No2)
{
        int Ans = 0;

        Ans = No1 / No2;

        getch();
        return Ans;
}



