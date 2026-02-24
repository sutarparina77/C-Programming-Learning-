#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0;
  
  printf("\n Enter a Number:");
  scanf("%d",&No);
  
  if( ((No >> 4) & 1) && ((No >> 17) & 1) )
  {
    printf("\n The 5th and 18th bit of given number %d is On", No);
  }
  else if( (No >> 4) & 1 )
  {
    printf("\n The 5th bit of given number %d is On", No);
  }
  else if( (No >> 17) & 1 )
  {
    printf("\n The 18th bit of given number %d is On", No);
  }
  else 
  {
    printf("\n The 5th and 18th bit of given number %d is Off", No);
  }
  
  getch();
  return 0;
}