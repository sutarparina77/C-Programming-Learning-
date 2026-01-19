#include<stdio.h>
#include<conio.h>
#define Size 7
int main()
{
  int Bill[Size] = {}, i = 0, B_Sum = 0;
  
  for(i = 0; i < Size; i++)
  {
    printf("\n Enter Bill No %d:",i+1);
    scanf("%d",&Bill[i]);
    
    B_Sum = B_Sum + Bill[i];
  }
  
  printf("\n Press Any key to see result");
  
  printf("\n Sum of all bills = %d.", B_Sum);
  
  getch();
  return 0;
}