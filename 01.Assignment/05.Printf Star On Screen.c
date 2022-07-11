#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0;

        printf("\n Enter Any Number = ");
        scanf("%d",&No);

        Pattern(No);

        getch();
        return 0;
}

void Pattern(int Num)
{
        int i = 0;

        if(Num < 0)
        {
            Num = -Num;
        }

        for(i = 1;i <= Num;i++)
        {
                printf(" * ");
                printf("\n");
        }
        getch();
}
