#include<stdio.h>
#include<conio.h>

void Display();

int main()
{
        Display();
        return 0;
}

void Display()
{
        int i = 0,No = 0;

        printf("Enter Any Number = ");
        scanf("%d",&No);

        for(i = 1;i <= No;i++)
        {
            printf("\n Marvellous \n");
        }

        getch();
}

