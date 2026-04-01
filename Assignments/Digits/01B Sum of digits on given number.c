#include<stdio.h>
#include<conio.h>

int main()
{
  int No = 0, D_Sum = 0, Temp = 0;
  
  printf("\n Enter a Number for sum of their digits:");
  scanf("%d",&No);
  
  for(Temp = No; Temp != 0; D_Sum += Temp % 10, Temp /= 10);
  
  printf("\n Sum of digits of given number %d = %d", No, D_Sum);
  
  getch();
  return 0;
}