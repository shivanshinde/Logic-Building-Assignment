#include<stdio.h>
#include<conio.h>

void Print (int);

int main()
{
    int No = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    Print(No);

    return 0;
}

void Print(int Num)
{
    int i =0;
    for(i = 0;i < Num;i++)
    {
        printf("\t $  * ");
    }
    getch();
    return 0;
}
