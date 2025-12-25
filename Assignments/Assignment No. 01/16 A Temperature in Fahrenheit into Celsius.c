#include<stdio.h>
#include<conio.h>
int main()
{
     float Fhrt = 0.0, Cel = 0.0;
     
     printf("\n Enter Temperature in Fahrenheit = ");
     scanf("%f",&Fhrt);
     
     Cel = (Fhrt - 32.0) * (5.0 / 9.0);
       
     printf("\n Temperature in Fahrenheit into Celsius is = %0.4f.",Cel);
     
     getch();
     return 0;
}
