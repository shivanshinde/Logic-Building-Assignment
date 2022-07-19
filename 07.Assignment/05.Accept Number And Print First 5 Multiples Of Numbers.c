#include<stdio.h>
#include<conio.h>

void MultipleDisplay(int);

int main()
{
    int No = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    MultipleDisplay(No);

    return 0;
}

void MultipleDisplay(int Num)
{
    int i = 0;

    for(i = 1;i <= 5;i++)
    {
        printf("\n\t %d",Num*i);
    }
    getch();
    return 0;
}
