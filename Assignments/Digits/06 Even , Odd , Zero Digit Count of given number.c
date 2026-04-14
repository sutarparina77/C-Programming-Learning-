#include<stdio.h>
#include<conio.h>

int main()
{
  int No = 0, ZrD_Cnt = 0, EvnD_Cnt = 0, OddD_Cnt = 0, Dig = 0, Temp = 0;
  
  printf("\n Enter a Number:");
  scanf("%d",&No);
  
  Temp = No;
  
  if(Temp > 0 || Temp < 9)
  {
    
    while(Temp != 0)
    {
      Dig = Temp % 10;
      
      if(Dig == 0)
      {
        ZrD_Cnt++;
      }
      else if(Dig % 2 == 0)
      {
        EvnD_Cnt++;
      }
      else
      {
        OddD_Cnt++;
      }
      Temp /= 10;
    }
    
  }
  
  printf("\n Zero Count of digits of given number %d = %d", No, ZrD_Cnt);
  printf("\n Even Count of digits of given number %d = %d", No, EvnD_Cnt);
  printf("\n Odd Count of digits of given number %d = %d", No, OddD_Cnt);
  
  getch();
  return 0;
}
