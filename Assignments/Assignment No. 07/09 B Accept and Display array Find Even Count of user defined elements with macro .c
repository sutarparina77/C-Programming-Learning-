#include<stdio.h>
#include<conio.h>
#define Size 5
int main()
{
  int Bill[Size] = {}, i = 0, E_Cnt = 0, No = 0;
  
  printf("\n Enter how many bills do you have :",No);
  scanf("%d",&No);
  
  for(i = 0; i < No; i++)
  {
    printf("\n Enter Bill No %d:",i+1);
    scanf("%d",&Bill[i]);
  }
  
  for(i = 0; i < No; i++)
  {
    if(Bill[i] %2 == 0)
    {
      E_Cnt++;
    }
  }
  
  printf("\n Even Count of all bills = %d.", E_Cnt);
  
  getch();
  return 0;
}