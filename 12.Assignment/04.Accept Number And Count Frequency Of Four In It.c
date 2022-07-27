#include<stdio.h>
#include<conio.h>

int CountFour(int);

int main()
{
    int No = 0,Ret = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    Ret = CountFour(No);

    printf("\n\t Four Number Count Is %d",Ret);

    getch();
    return 0;
}
int CountFour(int Num)
{
    int Dig = 0,F_Cnt = 0;

    if(Num < 0)
    {
        Num = -Num;
    }
    while(Num > 0)
    {
        Dig = Num % 10;
        if(Dig == 4)
        {
            F_Cnt++;
        }
        Num = Num / 10;
    }
    return F_Cnt;
}
