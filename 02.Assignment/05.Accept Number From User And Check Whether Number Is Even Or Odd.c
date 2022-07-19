#include<stdio.h>
#include<conio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Even_Odd(int No)
{
        if(No % 2 == 0)
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

    printf("\n\t Enter Number => ");
    scanf("%d",&No);

    Ans = Even_Odd(No);

    if(Ans == TRUE)
    {
        printf("\n\t Given Number Is Even...");
    }
    else
    {
        printf("\n\t Given Number Is Odd...");
    }

    getch();
    return 0;
}
