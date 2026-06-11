#include<stdio.h>
#include<conio.h>

float Area_Circle(float);
float Circumference_Circle(float);

int main()
{
    float Rad = 0, A_Res = 0, C_Res = 0;

    printf("\n Enter a radius :");
    scanf("%f",&Rad);

    A_Res = Area_Circle(Rad);
    C_Res = Circumference_Circle(Rad);

    printf("\n Area of circle is = %.2f", A_Res);
    printf("\n Circumference of circle is = %.2f", C_Res);

    getch();
    return 0;
}
float Area_Circle(float R)
{
    float Area = 0;

    Area = 3.14 * R * R;

    return Area;
}

float Circumference_Circle(float R)
{
    float Circum = 0;

    Circum = 2* 3.14 * R;

    return Circum;
}
