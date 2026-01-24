#include<stdio.h>
#include<conio.h>
#define Size 7
int main()
{
  int Bill[Size] = {}, i = 0, E_Cnt = 0;
  
  for(i = 0; i < Size; i++)
  {
    printf("\n Enter Bill No %d:",i+1);
    scanf("%d",&Bill[i]);

    if(Bill[i] %2 == 0 )
    {
      E_Cnt++;
    }
  }
  
  printf("\n Even Count of all bills = %d.", E_Cnt);
  
  getch();
  return 0;
}
