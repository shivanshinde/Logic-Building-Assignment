#include<stdio.h>
#include<conio.h>

void FactRev(int No);

int main()
{
    int Num = 0;

    printf("\n Enter Number => ");
    scanf("%d",&Num);

    FactRev(Num);

    return 0;
}
void FactRev(int No)
{
    int i = 0;

    for(i = No;i > 0;i--)
    {
        if(No % i == 0 && No != i)
        {
           printf(" %d ",i);
        }
    }
    getch();
}

