#include<stdio.h>
#include<conio.h>

int DollarToINR(int);

int main()
{
    int Dollar = 0,Ret = 0;

    printf("\n\t Enter Number Of USD => ");
    scanf("%d",&Dollar);

    Ret = DollarToINR(Dollar);

    printf("\n\t US Dollar In Indian Currency => %d",Ret);

    getch();
    return 0;
}
int DollarToINR(int Dollar)
{
    int Ans = 0;

    Ans = Dollar * 70;

    return Ans;
}
