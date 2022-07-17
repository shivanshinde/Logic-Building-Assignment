#include<stdio.h>
#include<conio.h>

int FactDiff(int No);

int main()
{
    int Num = 0, Ret = 0;

    printf("\n Enter Number => ");
    scanf("%d",&Num);

    Ret = FactDiff(Num);

    printf("\n\t Difference Of Sum Of Factors And Non Factors %d",Ret);

    getch();
    return 0;
}
int FactDiff (int No)
{
    int i = 0, Ans = 0,Fact = 0,NFact = 0;

    for(i = 1;i <= No;i++)
    {
        if(No % i != 0)
        {
           NFact = NFact + i;
        }
    }
    for(i = 1;i <= No;i++)
    {
        if(No % i == 0 && No != i)
        {
           Fact = Fact + i;
        }
    }
    Ans = Fact - NFact;
    return Ans;
}
