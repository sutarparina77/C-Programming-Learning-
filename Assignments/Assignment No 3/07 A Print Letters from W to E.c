#include<stdio.h>
#include<conio.h>
int main()
{
  int Letter = 'W';
  
  printf("\n OUTPUT ==> \n");
  
  while(Letter >= 'E')
  {
     printf(" %c ", Letter);
     Letter--;
  }
  
  getch();
  return 0;
}
