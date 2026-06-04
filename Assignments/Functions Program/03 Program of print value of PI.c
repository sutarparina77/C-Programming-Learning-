#include<stdio.h>
#include<conio.h>

float Print_PI_Val(void);

int main()
{
    float PI = 0;

    PI = Print_PI_Val();

    printf("\n Value of PI : %.2f", PI);

    getch();
    return 0;
}
float Print_PI_Val(void)
{
    return 3.14;
}

