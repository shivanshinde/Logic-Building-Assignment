#include<stdio.h>
#include<conio.h>

int RangEvenSum(int,int);

int main()
{
    int SNum = 0,ENum = 0,Ret = 0;

    printf("\n\t Enter Starting Number =>  ");
    scanf("%d",&SNum);

    printf("\n\t Enter Ending Number =>  ");
    scanf("%d",&ENum);

    Ret = RangEvenSum(SNum,ENum);

    if(Ret == -1)
    {
         printf("\n\t Invalid Input.....");
    }
    else
    {
        printf("\n\t Addition Of Even Numbers => %d",Ret);
    }

    getch();
    return 0;
}
int RangEvenSum(int SNum,int ENum)
{
    int i = 0,Ans = 0;

    if( SNum > ENum || SNum < 0 || ENum < 0)
    {
        return -1;
    }
    else
    {
        for(i = SNum;i <= ENum;i++)
        {
            if(i % 2 == 0)
            {
                Ans = Ans + i;
            }
        }
    }
    return Ans;
}
