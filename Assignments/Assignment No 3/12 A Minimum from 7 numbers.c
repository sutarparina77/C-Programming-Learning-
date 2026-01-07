#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0,Cnt = 0, Min_No = 0;
  
  printf("\n Enter 7 Numbers :");
  
  while(Cnt < 7)
  {
    printf("\n Enter a Number is %d :", Cnt+1);
    scanf("%d",&No);
    
    if((Cnt == 0) || (No < Min_No))
    {
      Min_No = No;
    }
    Cnt++;
  }
  
  printf("\n Minimum from 7 numbers is = %d", Min_No);
  
  getch();
  return 0;
}