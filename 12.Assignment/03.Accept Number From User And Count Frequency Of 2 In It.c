#include<stdio.h>
#include<conio.h>

int CntTwo(int);

int main()
{
    int No = 0,Ret = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    Ret = CntTwo(No);

    printf("\n\t Two Number Count Is %d",Ret);

    getch();
    return 0;
}
int CntTwo(int Num)
{
    int Dig = 0,T_Cnt = 0;

    if(Num < 0)
    {
        Num = -Num;
    }
    while(Num > 0)
    {
        Dig = Num % 10;
        if(Dig == 2)
        {
            T_Cnt++;
        }
        Num = Num / 10;
    }
    return T_Cnt;
}
