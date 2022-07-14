#include<stdio.h>
#include<conio.h>

void Pattern();

int main()
{
    int Num = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&Num);

    Pattern(Num);
    getch();
}

void Pattern(int No)
{
    int i = 0;

    if(No < 0)
    {
        No = -No;
    }

    while (i < No)
    {
        printf(" * ");
        printf("\n");
        i++;
    }
    getch();
}
