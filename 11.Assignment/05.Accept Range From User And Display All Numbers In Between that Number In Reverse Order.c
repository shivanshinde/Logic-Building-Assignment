#include<stdio.h>
#include<conio.h>

void RangeRevDisplay(int,int);

int main()
{
    int SNum = 0,ENum = 0;

    printf("\n\t Enter Starting Number =>  ");
    scanf("%d",&SNum);

    printf("\n\t Enter Ending Number =>  ");
    scanf("%d",&ENum);

    RangeRevDisplay(SNum,ENum);

    return 0;
}
void RangeRevDisplay(int SNo,int ENo)
{
    int i = 0;

    for(i = ENo;i >= SNo;i--)
    {
        printf("  %-3d",i);
    }
    getch();
}
