#include<stdio.h>
#include<conio.h>
void DisplayConvert(char Val);

int main()
{
    char Val = '\0';

    printf("\n Enter a Character:");
    scanf("%c",&Val);

    DisplayConvert(Val);

    getch();
    return 0;
}

void DisplayConvert(char Val)
{
    if(Val >= 'a' && Val <= 'Z')
    {
        printf("%c",Val-32);
    }
    else if(Val >= 'A' && Val <= 'Z')
    {
        printf("%c",Val+32);
    }
}
