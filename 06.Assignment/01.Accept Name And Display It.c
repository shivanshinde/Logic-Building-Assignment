#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[30];

    printf("\n\t Please Enter Your Full Name => ");
    scanf("%[^\n]",&Name);

    printf("\n\t Your Name Is => %s",Name);

    getch();
    return 0;
}
