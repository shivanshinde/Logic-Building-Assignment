#include<stdio.h>
#include<conio.h>

int KMtoMeter(int);

int main()
{
    int Km = 0,Ret = 0;

    printf("\n\t Enter Distance In Kilometer => ");
    scanf("%d",&Km);

    Ret = KMtoMeter(Km);

    printf("\n\t Distance Convert Kilometer To Meter => %d",Ret);

    getch();
    return 0;
}
int KMtoMeter(int Km)
{
    int Meter = 1;

    Meter = 1000 * Km;

    return Meter;
}
