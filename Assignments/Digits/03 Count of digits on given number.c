#include<stdio.h>
#include<conio.h>

int main()
{
  int No = 0, D_Cnt = 0, Dig = 0, Temp = 0;
  
  printf("\n Enter a Number:");
  scanf("%d",&No);
  
  Temp = No;
  if(Temp > 0 || Temp < 9)
  {
    while(Temp != 0)
    {
      Dig = Temp % 10;
      D_Cnt++;
      Temp /= 10;
    }
  }
  
  printf("\n Count of digits of given number %d = %d", No, D_Cnt);
 
  getch();
  return 0;
}