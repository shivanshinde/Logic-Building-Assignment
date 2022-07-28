#include<stdio.h>
#include<conio.h>

int Count(int);

int main()
{
    int No = 0,Ans = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    Ans = Count(No);

    printf("\n\t Count Of Number In Between 3 & 7 Is => %d",Ans);

    getch();
    return 0;
}
int Count(int Num)
{
    int Cnt = 0,Dig = 0;

    if(Num < 0)
    {
        Num = -Num;
    }

    while(Num > 0)
    {
        Dig = Num % 10;
        if(Dig > 3 && Dig < 7)
        {
            Cnt++;
        }
        Num = Num / 10;
    }
    return Cnt;
}
