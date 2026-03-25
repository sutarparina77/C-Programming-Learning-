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
  
  for(i = 1; i <= R; i++)
  {
    if(i % 2 != 0)
    {
       for(j = 1, ch = 'A'; j <= C; j++, ch++)
        {
           printf(" %c ", ch);
        }
        printf("\n"); 
    }
    else
    {
        for(j = 1, ch = 'a'; j <= C; j++, ch++)
        {
          printf(" %c ", ch);
        }
        printf("\n");
    }
  }
  
  getch();
  return 0;
}
