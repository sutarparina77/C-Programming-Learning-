#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0,Cnt = 0, Max_No = 0;
  
  printf("\n Enter 7 Numbers :");
  
  while(Cnt < 7)
  {
    printf("\n Enter a Number %d :", Cnt+1);
    scanf("%d",&No);
    
    if((Cnt == 0) || (No > Max_No))
    {
       Max_No = No;
    }
    
    Cnt++;
  }
  
  
  printf("\n Maximum from 7 numbers is = %d", Max_No);
  
  getch();
  return 0;
}