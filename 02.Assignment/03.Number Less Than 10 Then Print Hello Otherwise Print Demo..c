///Number Less Than 10 Then Print "Hello"Otherwise Print"Demo".
#include<stdio.h>
#include<conio.h>

void Display();

int main()
{
    int No = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&No);

    Display(No);

    return 0;
}
void Display(int No)
{
    if(No < 10)
    {
        printf("\n\t Hello");
    }
    else
    {
        printf("\n\t Demo");
    }
    getch();
}
