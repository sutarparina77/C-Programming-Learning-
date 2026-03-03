#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0, RC = 0, Rev = 0;
  
  printf("\n Enter Row and Column size:");
  scanf("%d",&RC);
  
  for(i = 1, Rev = RC; i <= RC; i++, Rev--)
  {
    for(j = 1; j <= RC; j++)   
    {
          printf(" %d ", Rev);
    }
    printf("\n");
  }
  
  getch();
  return 0;
}