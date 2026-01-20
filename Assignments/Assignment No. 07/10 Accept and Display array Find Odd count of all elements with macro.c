#include<stdio.h>
#include<conio.h>
#define Size 7
int main()
{
  int Bill[Size] = {}, i = 0, O_Cnt = 0;
  
  for(i = 0; i < Size; i++)
  {
    printf("\n Enter Bill No %d:",i+1);
    scanf("%d",&Bill[i]);
  }
  
  for(i = 0; i < Size; i++)
  {
    if(Bill[i] %2 == 1)
    {
      O_Cnt++;
    }
  }
  
  printf("\n Odd Count of all bills = %d.", O_Cnt);
  
  getch();
  return 0;
}
