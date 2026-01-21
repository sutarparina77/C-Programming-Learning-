#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0;
  
  printf("\n Tables from 7 to 13 is : \n ");
  
  for(i = 1; i <= 10; i++)
  {
      for(j = 7; j <= 13; j++)
      {
        printf(" %3d ", i*j);
      }
      printf("\n");
  }
  
  getch();
  return 0;
}