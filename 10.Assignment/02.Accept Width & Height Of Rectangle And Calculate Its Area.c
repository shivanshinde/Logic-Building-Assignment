#include<stdio.h>
#include<conio.h>

double RectArea(float,float);

int main()
{
    float Width = 0.0,Height = 0.0;
    double Ret = 0.0;

    printf("\n\t Enter Width Of Rectangle =>");
    scanf("%f",&Width);

    printf("\n\t Enter Height Of Rectangle =>");
    scanf("%f",&Height);

    Ret = RectArea(Width,Height);

    printf("\n\t Area Of Rectangle Is => %lf ",Ret);

    getch();
    return 0;
}

double  RectArea(float Width,float Height)
{
    double Area = 0.0;

    Area = Width * Height;

    return Area;
}

