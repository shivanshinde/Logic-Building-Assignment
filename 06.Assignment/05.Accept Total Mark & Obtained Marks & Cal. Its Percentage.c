#include<stdio.h>
#include<conio.h>

float Percentage(int,int);

int main()
{
    int No1 = 0,No2 = 0;
    float Ans = 0.0;

    printf("\n\t Enter Total Marks => ");
    scanf("%d",&No1);

    printf("\n\t Enter Obtained Marks =>  ");
    scanf("%d",&No2);

    Ans = Percentage(No1,No2);

    printf("\n\t Percentage Of Obtained Marks Is %0.2f %",Ans);

    getch();
    return 0;
}

float  Percentage(int Num1,int Num2)
{
    float Ret = 0.0;

    Ret = (Num2 % Num1);

    return Ret;

}
