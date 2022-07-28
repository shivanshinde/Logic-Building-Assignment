#include<stdio.h>
#include<conio.h>

int MultDigit (int);

int main()
{
    int No = 0,Ret = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    Ret = MultDigit (No);

    printf("\n\t Multiplication Of All Digit => %d",Ret);

    getch();
    return 0;
}
int MultDigit (int Num)
{
    int Dig = 0,Mul = 1;

    if(Num < 0)
    {
        Num = -Num;
    }

    while(Num > 0)
    {
        Dig = Num % 10;
        if(Dig != 0)
        {
            Mul = Mul * Dig;
        }
        Num = Num / 10;
    }
    return Mul;
}
