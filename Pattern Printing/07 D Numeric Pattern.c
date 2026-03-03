#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0, RC = 0, Rev = 0;
  
  printf("\n Enter Row and Column size:");
  scanf("%d",&RC);
  
  for(i = 1; i <= RC; i++)    
  {
    for(j = 1, Rev = RC; j <= RC; j++, Rev--)   
    {
          printf(" %d ", Rev);
    }
    printf("\n");
  }
  
  getch();
  return 0;
}
