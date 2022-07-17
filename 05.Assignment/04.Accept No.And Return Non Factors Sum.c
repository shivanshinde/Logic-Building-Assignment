#include<stdio.h>
#include<conio.h>

int SumNonFact(int No);

int main()
{
    int Num = 0, Ret = 0;

    printf("\n Enter Number => ");
    scanf("%d",&Num);

    Ret = SumNonFact(Num);

    printf("\n\t Sum OF Non Factors Number %d",Ret);

    getch();
    return 0;
}
int SumNonFact(int No)
{
    int i = 0, Ans = 0;

    for(i = 1;i <= No;i++)
    {
        if(No % i != 0)
        {
            Ans = Ans + i;
        }
    }
    return Ans;
}
