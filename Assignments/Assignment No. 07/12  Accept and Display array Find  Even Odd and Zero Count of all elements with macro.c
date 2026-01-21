#include<stdio.h>
#include<conio.h>
#define Size 7
int main()
{
  int Bill[Size] = {}, i = 0, Z_Cnt = 0, E_Cnt = 0, O_Cnt = 0;
  
  for(i = 0; i < Size; i++)
  {
    printf("\n Enter Bill No %d:",i+1);
    scanf("%d",&Bill[i]);
    
    if(Bill[i] == 0)
    {
      Z_Cnt++;
    }
    else if(Bill[i] %2 == 0)
    {
      E_Cnt++;
    }
    else
    {
      O_Cnt++;
    }
  }
  
  printf("\n Zero Count of all bills = %d.", Z_Cnt);
  printf("\n Even Count of all bills = %d.", E_Cnt);
  printf("\n Odd Count of all bills = %d.", O_Cnt);
  getch();
  return 0;
}
