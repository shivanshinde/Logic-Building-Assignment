#include<stdio.h>
#include<conio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Div();

BOOL main()
{
        BOOL Ans = 0;

        int No = 0;

        printf("\n Enter Any Number = ");
        scanf("%d",&No);

        Ans = Div(No);

        if(Ans == FALSE)
        {
            printf("\n Given Number Is Not Divisible By 5 ");
        }
        else
        {
            printf("\n Given Number Is Divisible By 5");
        }
        getch();
        return 0;
}

int Div(int No)
{

        if((No % 5)== 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        return 0;
    }
