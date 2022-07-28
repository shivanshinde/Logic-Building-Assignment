#include<stdio.h>
#include<conio.h>

int EvenCnt(int);

int main()
{
    int No = 0,Ans = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    Ans = EvenCnt(No);

    printf("\n\t Even Count Of Given Number Is => %d ",Ans);

    getch();
    return 0;
}
int EvenCnt(int Num)
{
    int E_Cnt = 0,Dig = 0;

    if(Num < 0)
    {
        Num = -Num;
    }
    while(Num > 0)
    {
        Dig = Num % 10;
        if(Dig % 2 == 0)
        {
            E_Cnt++;
        }
        Num = Num / 10;
    }
    return E_Cnt;
}
