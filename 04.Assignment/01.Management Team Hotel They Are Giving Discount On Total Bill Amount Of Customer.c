///Amount < 500 => No Discount , Amount > 500 & Amount < 1500 => Give 10% Discount , Amount > 1500 => 15% Discount....

#include<stdio.h>
#include<conio.h>

float Calculate_Bill(float Amount)
{
        float Discount = 0.0;

        if(Amount <= 500)
        {
                printf("\n\t No Discount....");
                return Amount;
        }
        else if(Amount > 500 && Amount <= 1500)
        {
                Discount = (Amount / 100)*10;
                printf("\n\t Discount Price => %0.2f",Discount);
                return Amount - Discount;
        }
        else
        {
                Discount = (Amount / 100)*15;
                printf("\n\t Discount Price => %0.2f",Discount);
                return Amount - Discount;
        }
        getch();
}
int main()
{
        float T_Amount = 0.0;

        printf("\n\t Enter Total Bill Amount => ");
        scanf("%f",&T_Amount);

        printf("\n\t Discount On That Bill Amount Of Customer => %0.2f",Calculate_Bill(T_Amount));

        getch();
        return 0;
}
