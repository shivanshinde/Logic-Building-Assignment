#include<stdio.h>
#include<conio.h>

void PrintNumber(int);

int main()
{
    int No = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    PrintNumber(No);

    return 0;
}
void PrintNumber(int Num)
{
    int i = 0;

    for(i = 0;i < Num;i++)
    {
        printf("\t %d",i+1);
    }
    getch();
    return 0;
}
