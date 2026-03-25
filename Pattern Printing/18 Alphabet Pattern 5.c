#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0, R = 0, C = 0;
  char ch = '\0';
  
  printf("\n Enter Row size:");
  scanf("%d",&R);
    
  printf("\n Enter Column size:");
  scanf("%d",&C);
  
  for(i = 1, ch = 'A'; i <= R; i++, ch++)
  {
    for(j = 1; j <= C; j++)
    {
        if(j % 2 == 0)
        {
           printf(" %c ", ch);
        }
        else
        {
             printf(" %c ", ch+32);
        }
    }
    printf("\n");
  }
  
  getch();
  return 0;
}