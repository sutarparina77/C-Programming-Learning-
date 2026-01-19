#include<stdio.h>
#include<conio.h>
#define Size 7
int main()
{
  int Bill[Size] = {}, i = 0, Cnt = 0;
  
  for(i = 0; i < Size; i++)
  {
    printf("\n Enter Bill No %d:",i+1);
    scanf("%d",&Bill[i]);
    
    Cnt++;
  }
  
  printf("\n Press Any key to see result");
  
  printf("\n Count of all bills = %d.", Cnt);
  
  getch();
  return 0;
}