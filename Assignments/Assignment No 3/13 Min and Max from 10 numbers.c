#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0,Cnt = 0, Max_No = 0, Min_No = 0 ;
  
  printf("\n Enter 10 Numbers :");
  
  while(Cnt < 10)
  {
    printf("\n Enter a Number %d :", Cnt+1);
    scanf("%d",&No);
    
    if((Cnt == 0) || (No > Max_No))
    {
       Max_No = No;
    }
    
    if((Cnt == 0) || (No < Min_No))
    {
       Min_No = No;
    }
    
    Cnt++;
  }
  
  printf("\n Maximum from 10 numbers is = %d", Max_No);
  printf("\n Minimum from 10 numbers is = %d", Min_No);
  
  getch();
  return 0;
}