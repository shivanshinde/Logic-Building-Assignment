#include<stdio.h>
#include<conio.h>

void Display(int);

int main()
{
    int No = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    Display(No);

    getch();
}
void Display(int Num)
{
    int Num1 = -Num;

    while(Num1 <= Num)
    {
        printf("\t %d",Num1);
        Num1++;
    }
    getch();
    return 0;
}
