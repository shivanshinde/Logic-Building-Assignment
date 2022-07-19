#include<stdio.h>
#include<conio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int Num1,int Num2)
{
    if(Num1 == Num2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int No1 = 0,No2 = 0;
    BOOL Ans = FALSE;

    printf("\n\t Enter Two Numbers => ");
    scanf("%d%d",&No1,&No2);

    Ans = Check(No1,No2);

    if(Ans == TRUE)
    {
        printf("\n\t Given Number Is Equal.");
    }
    else
    {
        printf("\n\t Given Number Is Not Equal.");
    }
    getch();
    return 0;
}
