#include<stdio.h>
#include<conio.h>

void Pattern();

int main()
{
    int Num = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&Num);

    Pattern(Num);
    return 0;
}

void Pattern(int No)
{
    if(No < 0)
    {
        No = -No;
    }
    while(No > 0)
    {
        printf(" * ");
        No--;
    }
    getch();
}

