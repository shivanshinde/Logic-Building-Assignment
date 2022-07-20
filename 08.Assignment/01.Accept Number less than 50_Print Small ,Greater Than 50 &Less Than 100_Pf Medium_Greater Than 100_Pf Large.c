#include<stdio.h>
#include<conio.h>

void Number(int);

int main()
{
    int No = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    Number(No);

    return 0;
}
void Number(int Num)
{
    if(Num <= 50)
    {
        printf("\n\t Small");
    }
    else if(Num > 50 && Num <= 100)
    {
        printf("\n\t Medium");
    }
    else
    {
        printf("\n\t Large");
    }
    getch();
    return 0;
}
