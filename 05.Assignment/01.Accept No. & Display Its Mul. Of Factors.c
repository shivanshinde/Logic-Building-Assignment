#include<stdio.h>
#include<conio.h>

int MultFact (int No);

int main()
{
    int Num = 0,Ret = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&Num);

    Ret = MultFact(Num);

    printf("\n\t Multiplication Of Factors Of Given Number Is %d",Ret);

    getch();

    return 0;
}
int MultFact(int No)
{
    int Ans = 0,i = 0;

    for(i = 1;i <= No;i++)
    {
        if(No % i == 0)
        {
            Ans = i*i;
        }
    }
    return Ans;
}

