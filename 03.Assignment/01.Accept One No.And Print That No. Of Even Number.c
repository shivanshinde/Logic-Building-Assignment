#include<stdio.h>
#include<conio.h>

void Even();

int main()
{
    int No = 0;

    printf("\n Enter Number => ");
    scanf("%d",&No);

    Even(No);

    return 0;
}

void Even(int Num)
{
    int i = 0;
    if(Num <= 0)
    {
        Num = -Num;
    }

    for(i = 1;i <= Num;i++)
    {
        printf(" %d ",i*2);
    }
    getch();

}
