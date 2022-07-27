#include<stdio.h>
#include<conio.h>

void ChkZero(int);

int main()
{
    int No = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    ChkZero(No);

    return 0;
}
void ChkZero(int Num)
{
    int Dig = 0,Cnt = 0;
    if(Num < 0)
    {
        Num = -Num;
    }
    while(Num > 0)
    {
        Dig = Num % 10;

        if(Dig == 0)
        {
            goto Down;
        }

        Num = Num / 10;
    }

        if(Dig != 0)
        {
            printf("\n\t There Is No Zero");
        }
        else
        {
            Down:
            printf("\n\t It Contains Zero");
        }
    getch();
}
