#include<stdio.h>
#include<conio.h>
int main()
{
  char Letter = 'N';
  
  printf("\n OUTPUT ==> \n");
  
  while(Letter >= 'H')
  {
     printf("%c", Letter);
     Letter--;
  }
  
  getch();
  return 0;
}
