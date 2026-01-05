#include<stdio.h>
#include<conio.h>
int main()
{
  int Bill = 0, Cnt = 0, Bill_Sum = 0;
  
  printf("\n Enter Today's bills : \n");
  
  while(1)
  {
    printf("\n Enter Bill no %d :", Cnt + 1);
    scanf("%d",&Bill);
    
    if(Bill <= 0)
    {
      break;
    }
    
    Bill_Sum = Bill + Bill_Sum;
    Cnt++;
  }
  
  printf("\n Sum of %d bills is = %d.", Cnt, Bill_Sum);
  
  printf("\n Thanks for visiting");
  
  getch();
  return 0;
}