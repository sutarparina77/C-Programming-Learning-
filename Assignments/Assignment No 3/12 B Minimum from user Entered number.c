#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0, Cnt = 0, Min_No = 0, No_Cnt =0;
  
  printf("\n Enter how many numbers do you have :");
  scanf("%d",&No_Cnt);
  
  printf("\n Enter all %d Numbers :", No_Cnt);
  
  while(Cnt < No_Cnt)
  {
    printf("\n Enter a Number %d :", Cnt+1);
    scanf("%d",&No);
    
    if((Cnt == 0) || (No < Min_No))
    {
       Min_No = No;
    }
    
    Cnt++;
  }
  
  
  printf("\n Minimum from %d numbers is = %d", No_Cnt, Min_No);
  
  getch();
  return 0;
}