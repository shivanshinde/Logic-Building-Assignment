#include<stdio.h>
#include<conio.h>

void EvenRange(int,int);

int main()
{
    int SNo = 0,ENo = 0;

    printf("\n\t Enter Starting Range Number => ");
    scanf("%d",&SNo);

    printf("\n\t Enter Ending Number Of Range => ");
    scanf("%d",&ENo);

    EvenRange(SNo,ENo);

    getch();
    return 0;
}
void EvenRange(int SNo,int ENo)
{
    int i = 0;

    if(SNo > ENo)
    {
        printf("\n\t invalid Input....");
    }

        for(i = SNo;i <= ENo;i++)
        {
            if(i % 2 == 0)
            {
                printf("\n\t %d",i);
            }
        }

    getch();
    return 0;

}
