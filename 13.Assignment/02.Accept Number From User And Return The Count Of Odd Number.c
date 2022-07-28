#include<stdio.h>
#include<conio.h>

int OddCnt(int);

int main()
{
    int No = 0,Ans = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    Ans = OddCnt(No);

    printf("\n\t Odd Count Of Number Is => %d",Ans);

    getch();
    return 0;
}
int OddCnt(int Num)
{
    int O_Cnt = 0,Dig = 0;

    if(Num < 0)
    {
        Num = -Num;
    }

    while(Num > 0)
    {
        Dig = Num % 10;
        if(Dig % 2 == 1)
        {
            O_Cnt++;
        }
        Num = Num / 10;
    }
    return O_Cnt;
}
