#include<stdio.h>
#include<conio.h>
int main()
{
  float Num = 0.0, Sqr = 0.0;
 
  printf("\n Enter The Number");
  scanf("%f",&Num);
  
  Sqr = Num * Num;
  
  printf("\n Square of Number : %f", Sqr);
  
  getch();
  return 0;
}
