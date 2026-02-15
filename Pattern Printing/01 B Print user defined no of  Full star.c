#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0, R = 0, C = 0;
  
  printf("\n Enter Row size:");
  scanf("%d",&R);
  
  printf("\n Enter Column size:\n");
  scanf("%d",&C);
  
  for(i = 1; i <= R; i++)     //Loop for Row
  {
    for(j = 1; j <= C; j++)   //Loop for Column
    {
      printf(" * ");
    }
    printf("\n");
  }
  printf("\n ============******=========\n");
  
  getch();
  return 0;
}