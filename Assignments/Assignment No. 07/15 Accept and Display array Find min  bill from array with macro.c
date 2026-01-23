#include<stdio.h>
#include<conio.h>
#define Size 7
int main()
{
  int Bill[Size] = {}, i = 0, Min_Bill = 0;
  
  for(i = 0; i < Size; i++)
  {
    printf("\n Enter Bill No %d:",i+1);
    scanf("%d",&Bill[i]);
    
    if((i == 0) || (Bill[i] < Min_Bill))
    {
      Min_Bill = Bill[i];
    }
  }
  
  printf("\n Minimum bill from all bills = %d.", Min_Bill);
  
  getch();
  return 0;
}