#include<stdio.h>
#include<conio.h>
int main()
{
  int Count = 10;
  
  printf("\n Table of 25: ==> \n\n");
  
  while(Count >= 1)
  {
    printf("\n %d ", (Count * 25));
    Count--;
  }
  
  printf("\n THANKS");
  
  getch();
  return 0;
}