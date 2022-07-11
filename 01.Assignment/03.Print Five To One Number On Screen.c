#include<stdio.h>
#include<conio.h>

void series();

int main()
{
        series();
        return 0;
}

void series()
{
        int i = 0;

        i = 5;
        while(i >= 1)
        {
            printf("\n %d",i);
            i--;
        }
        getch();
}
