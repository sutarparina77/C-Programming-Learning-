#include<stdio.h>
#include<conio.h>
#define Size 7
int main()
{
  int Bill[Size] = {}, i = 0, Z_Cnt = 0;
  
  for(i = 0; i < Size; i++)
  {
    printf("\n Enter Bill No %d:",i+1);
    scanf("%d",&Bill[i]);
  
    if(Bill[i] == 0)
    {
      Z_Cnt++;
    }
  }
  
  printf("\n Zero Count of all bills = %d.", Z_Cnt);
  
  getch();
  return 0;
}
