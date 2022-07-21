#include<stdio.h>
#include<conio.h>

int School_Fees(int Standard)
{
    if(Standard == 1)
    {
        return 8900;
    }
    else if(Standard == 2)
    {
        return 12790;
    }
    else if(Standard == 3)
    {
        return 21000;
    }
    else
    {
        return 23450;
    }

    getch();
}
int main()
{
    int Standard = 0;
    up:
    printf("\n\t Enter Standard => ");
    scanf("%d",&Standard);

    if(Standard > 4)
    {
        printf("\n\t Invalid Input....");
        goto up;
    }

    printf("\n\t Standard Corresponding Fees => %d",School_Fees(Standard));

    getch();
    return 0;
}
