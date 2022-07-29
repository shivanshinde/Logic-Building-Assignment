#include<stdio.h>
#include<conio.h>

void Pattern(int);

int main()
{
    int No = 0;

    printf("\n\t Enter Number Of Element => ");
    scanf("%d",&No);

    Pattern(No);

    return 0;
}
void Pattern(int Num)
{
    int i = 0;

    for(i = 1;i <= Num;i++)
    {
        printf(" %d *",i);
    }

    getch();
    return 0;
}
