#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0;
  
  printf("\n Tables from 27 to 19 is : \n");
  
  for(i = 1; i <= 10; i++)
  {
      for(j = 27; j >= 19; j--)
      {
        printf(" %3d ", i*j);
      }
      printf("\n");
  }
  
  getch();
  return 0;
}
