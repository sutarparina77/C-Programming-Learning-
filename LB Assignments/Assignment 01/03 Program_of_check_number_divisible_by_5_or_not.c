#include<stdio.h>
#include<conio.h>
void Display();

int main()
{
    Display();

    getch();
    return 0;
}
void Display()
{
    int i = 1;

    while(i <= 5)
    {
        printf("%d \n", i);
        i++;
    }
}
