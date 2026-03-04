#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0, R = 0, C = 0, Cnt = 0, Num = 1;
  
  printf("\n Enter Row size:");
  scanf("%d",&R);
  
  printf("\n Enter Column size:");
  scanf("%d",&C);
  
  printf("\n Enter table No.:");
  scanf("%d",&Cnt);
  
  for(i = 1; i <= R; i++)
  {
    for(j = 1; j <= C; j++)   
    {
          printf(" %3d ", Num*Cnt);
          Num++;
    }
    printf("\n");
  }
 
  getch();
  return 0;
}