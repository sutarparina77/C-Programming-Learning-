#include<stdio.h>
#include<conio.h>
int main()
{
  int Bill = 0, Cnt = 0, Bill_Sum = 0;
  
  printf("\n Enter all 10 bills : \n");
  
  while(Cnt < 10)
  {
    printf("\n Enter Bill no %d :", Cnt + 1);
    scanf("%d",&Bill);
    
    Bill_Sum = Bill + Bill_Sum;
    Cnt++;
  }
  
  printf("\n Sum of 10 bills is = %d", Bill_Sum);
  
  printf("\n Thanks for visiting");
  
  getch();
  return 0;
}