#include<stdio.h>
#include<conio.h>

void DisplayDigit(int);

int main()
{
    int No = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    DisplayDigit(No);

    return 0;
}
void DisplayDigit(int Num)
{
    int Dig = 0;

    if(Num < 0)
    {
        Num = -Num;
    }

    while(Num > 0)
    {
        Dig = Num % 10;
        printf("\n\t %d",Dig);
        Num = Num / 10;
    }
    getch();
}
