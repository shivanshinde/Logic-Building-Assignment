#include<stdio.h>
#include<conio.h>

void TableRev(int);

int main()
{
    int No = 0;

    printf("\n\t Enter Any Number To Reverse Print Its Table => ");
    scanf("%d",&No);

    TableRev(No);

    return 0;
}

void TableRev(int Num)
{
    int i = 0;

    for(i = 10;i > 0;i--)
    {
        printf("\n\t %d",i * Num);
    }
    getch();
    return 0;
}
