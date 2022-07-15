#include<stdio.h>
#include<conio.h>

void Display();

int main()
{
    int No1 = 0,No2 = 0;

    printf("\n Enter Number => ");
    scanf("%d",&No1);

    printf("\n Enter Frequency => ");
    scanf("%d",&No2);

    Display(No1,No2);
    return 0;
}
Display(int Num1,int Num2)
{
    int i = 0;

    for(i = 1;i < Num2;i++)
    {
        printf("\n%d",Num1);
    }
    getch();
}
