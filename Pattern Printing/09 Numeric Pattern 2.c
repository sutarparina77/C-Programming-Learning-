#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0, RC = 0, Num = 1;
  
  printf("\n Enter Row and Column size:");
  scanf("%d",&RC);
    
  for(i = 1; i <= RC; i++)
  {
    for(j = 1; j <= RC; j++)   
    {
          printf(" %3d ", Num*RC);
          Num++;
    }
    printf("\n");
  }
 
  getch(); 
  return 0;
}