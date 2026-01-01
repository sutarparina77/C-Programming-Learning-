#include<stdio.h>
#include<conio.h>
int main()
{
  int Count = 1;
  
  printf("\n Table of 25: ==> \n\n");
  
  while(Count <= 10)
  {
    printf("\n %2d * %2d = %3d ", 25 , Count, (25 * Count));
    Count++;
  }
  
  printf("\n THANKS");
  
  getch();
  return 0;
}