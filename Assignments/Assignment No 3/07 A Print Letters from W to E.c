#include<stdio.h>
#include<conio.h>
int main()
{
  char ch = 'W';
  
  printf("\n OUTPUT ==> \n");
  
  while(ch >= 'E')
  {
     printf(" %c ", ch);
     ch--;
  }
  
  getch();
  return 0;
}
