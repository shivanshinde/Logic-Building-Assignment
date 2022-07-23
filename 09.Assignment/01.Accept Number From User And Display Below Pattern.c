#include<stdio.h>
#include<conio.h>

void Pattern(int);

int main()
{
    int No = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

     Pattern(No);

    return 0;
}
void Pattern(int No)
{
    int i = 0,j = 0;

    for(i = 0;i < No;i++)
    {
        printf("\t * ");
    }
     for(j = 0;j < No;j++)
    {
        printf("\t # ");
    }
    getch();
    return 0;
}
