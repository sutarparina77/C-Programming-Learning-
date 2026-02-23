#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0;
  
  printf("\n Enter a Number");
  scanf("%d",&No);
  
  if((No >> 14) & 1)
  {
    printf("\n The 15th bit of given number %d is On", No);
  }
  else
  {
    printf("\n The 15th bit of given number %d is Off", No);
  }
  
  getch();
  return 0;
}