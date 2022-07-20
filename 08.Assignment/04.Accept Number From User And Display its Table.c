#include<stdio.h>
#include<conio.h>

void Display(int);

int main()
{
    int No = 0;

    printf("\n\t Enter ANy Number To Print Table =>  ");
    scanf("%d",&No);

    Display(No);

    return 0;
}

void Display(int Num)
{
    int i = 0;

    for(i = 1;i <= 10;i++)
    {
        printf("\n\t%d",i*Num);
    }
    getch();
    return 0;
}
