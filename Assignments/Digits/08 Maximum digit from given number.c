#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0, Max_Dig = 0, Dig = 0, Temp = 0;
  
  printf("\n Enter a Number:");
  scanf("%d",&No);
  
  Temp = No;
  
  while(Temp != 0)
  {
    Dig = Temp % 10;
    
    if(Dig > Max_Dig)
    {
      Max_Dig = Dig;
    }
    Temp /= 10;
  }
  printf("\n Maximum digit from given number %d = %d", No, Max_Dig);
 
  getch();
  return 0;
}