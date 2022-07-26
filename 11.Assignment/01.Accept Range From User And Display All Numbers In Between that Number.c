#include<stdio.h>
#include<conio.h>

void RangeDisplay(int,int);

int main()
{
    int S_No = 0,E_No = 0;

    printf("\n\t Enter Starting Range Number => ");
    scanf("%d",&S_No);

    printf("\n\t Enter Ending Number Of Range => ");
    scanf("%d",&E_No);

    RangeDisplay(S_No,E_No);

    return 0;
}
void RangeDisplay(int S_No,int E_No)
{
    int i = 0;

    if(S_No > E_No)
    {
        printf("\n\t Invalid Input....");
    }
    else
    {
        for(i = S_No;i <= E_No;i++)
        {
            printf("  %-3d",i);
        }
    }
    getch();
    return ;
}
