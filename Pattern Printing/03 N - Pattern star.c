#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0, R = 0, C = 0;
  
  printf("\n Enter Row size:");
  scanf("%d",&R);
  
  printf("\n Enter Column size:");
  scanf("%d",&C);
  
  for(i = 1; i <= R; i++)    
  {
    for(j = 1; j <= C; j++)   
    {
      if(i ==j || j == 1 || j == C)
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