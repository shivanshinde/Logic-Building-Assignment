#include<stdio.h>
#include<conio.h>

int Count(int);

int main()
{
    int No = 0,Ret = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    Ret = Count(No);

    printf("\n\t Less Than Six Number Count Is %d",Ret);

    getch();
    return 0;
}
int Count(int Num)
{
    int Dig = 0,Cnt = 0;

    if(Num < 0)
    {
        Num = -Num;
    }
    while(Num > 0)
    {
        Dig = Num % 10;
        if(Dig < 6)
        {
            Cnt++;
        }
        Num = Num / 10;
    }
    return Cnt;
}

