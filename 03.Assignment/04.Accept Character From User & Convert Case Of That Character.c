#include<stdio.h>
#include<conio.h>

void DisplayConvert(char);

int main()
{
    char ch = '\0';

    printf("\n Enter Any Character =>  ");
    scanf("%c",&ch);

    DisplayConvert(ch);

    return 0;
}
void DisplayConvert(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n\t Convert To Small Letter %c",ch+32);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n\t Convert To Capital Letter %c",ch-32);
    }
    getch();
}
