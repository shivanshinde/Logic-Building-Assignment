#include<stdio.h>
#include<conio.h>

void NonFact(int No);

int main()
{
    int Num = 0;

    printf("\n Enter Number => ");
    scanf("%d",&Num);

    NonFact(Num);

    return 0;
}
void NonFact(int No)
{
    int i = 0;

    for(i = 1;i <= No;i++)
    {
        if(No % i != 0)
        {
            printf(" %d ",i);
        }
    }
    getch();
}
