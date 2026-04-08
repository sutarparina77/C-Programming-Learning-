#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0, RC = 0;
  
  printf("\n Enter Rows and Column size :");
  scanf("%d",&RC);
  
  ///Upper Half
  for(i = 1; i <= RC/2 + 1; i++)
  {
    for(j = 1; j <= (RC/2 + 1) - i; j++)
    {
      printf("   ");
    }
    for(j = 1; j <= (2 * i) - 1; j++)
    {
      printf(" * ");
    }
     printf("\n");
  }
  
  ///Lower Half
  for(i = 1; i <= RC/2; i++)
  {
    for(j = 1; j <= i; j++)
    {
      printf("   ");
    }
    for(j = 1; j <= RC - (2 * i); j++)
    {
      printf(" * ");
    }
     printf("\n");
  }
  
  getch();
  return 0;
}