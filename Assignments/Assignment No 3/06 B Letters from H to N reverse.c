#include<stdio.h>
#include<conio.h>
int main()
{
  char ch = 'N';
  
  printf("\n OUTPUT ==> \n");
  
  while(ch >= 'H')
  {
     printf(" %c ", ch);
     ch--;
  }
  
  getch();
  return 0;
}