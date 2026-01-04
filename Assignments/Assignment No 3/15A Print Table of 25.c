#include<stdio.h>
#include<conio.h>
int main()
{
  int Cnt = 1;
  
  printf("\n Table of 25 : ==> \n\n");
  
  while(Cnt <= 10)
  {
    printf("\n %d", (Cnt * 25));
    Cnt++;
  }
  
  printf("\n Thanks");
  
  getch();
  return 0;
}