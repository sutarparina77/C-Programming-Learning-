#include<stdio.h>
#include<conio.h>

int main()
{
  int No = 0, D_Sum = 0, Dig = 0, Temp = 0;
  
  printf("\n Enter a Number for sum of their digits:");
  scanf("%d",&No);
  
  Temp = No;
  
  while(Temp != 0)
  {
    Dig = Temp % 10;
    D_Sum += Dig;
    Temp /= 10;
  }
  printf("\n Sum of digits of given number %d = %d", No, D_Sum);
 
  getch();
  return 0;
}
