#include<stdio.h>
#include<conio.h>
int main()
{
     float Fhrt = 0.0, Cel = 0.0;
     
     printf("\n Enter Temperature in Celsius = ");
     scanf("%f",&Cel);
     
     Fhrt = (9.0 / 5.0) * Cel + 32.0;
       
     printf("\n Temperature in Celsius into Fahrenheit is = %0.4f.",Fhrt);
     
     getch();
     return 0;
}
