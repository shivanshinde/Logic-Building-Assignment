#include<stdio.h>
#include<conio.h>

int OddFactorial(int);

int main()
{
    int No = 0,Ret = 0;

    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);

    Ret = OddFactorial(No);

    printf("\n\t Odd Factorial Multiplication Is => %d",Ret);

    getch();
    return 0;
}
int OddFactorial(int Num)
{
    int Ans = 1,i = 0;

    for(i = 1;i <= Num;i++)
    {
        if(i % 2 == 1)
        {
            Ans = Ans * i;
        }
    }
    return Ans;
}
