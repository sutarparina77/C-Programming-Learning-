#include<stdio.h>
#include<conio.h>

void Display_Message();

int main()
{
    printf("\n Inside Main");

    Display_Message();

    printf("\n Back to main");

    getch();
    return 0;
}
void Display_Message()
{
    printf("\n WELCOME !!!");

    return;
}

