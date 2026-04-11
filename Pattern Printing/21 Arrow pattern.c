#include<stdio.h>
#include<conio.h>

int main()
{
  int i = 0, j = 0, RC = 0;
  
  printf("\n Enter Rows and Column size :");
  scanf("%d",&RC);
   
  for(i = 1; i <= RC; i++)
  {
    for(j = 1; j <= RC; j++)
    {
      if(j == RC/2 + 1 || i + j == (RC/2 + 1) + 1 || 
        j == RC/2 + i)
      {
        printf(" * ");
      }
      else
      {
        printf("   ");
      }
    }
     printf("\n");
  }
  
  getch();
  return 0;
}
