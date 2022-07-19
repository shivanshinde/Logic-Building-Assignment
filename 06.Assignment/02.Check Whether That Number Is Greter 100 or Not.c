#include<stdio.h>
#include<conio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Chk_Greater(int No)
{
    if(No > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    return 0;
}
int main()
{
    int No = 0;
    BOOL Ans = FALSE;

    printf("\n\t Please Enter Number => ");
    scanf("%d",&No);

    Ans = Chk_Greater(No);

    if(Ans == TRUE)
    {
        printf("\n\t Given Number %d Is Greater Than 100...",No);
    }
    else
    {
        printf("\n\t Given Number %d Is Not Greater Than 100...",No);
    }
    getch();
    return 0;
}
