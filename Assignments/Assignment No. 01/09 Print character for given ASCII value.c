#include<stdio.h>
#include<conio.h>
int main()
{
  int Val = 0;
  
  printf("\n Enter a ASCII Value :");
  scanf("%d",&Val);
  
  printf("\n\n Character for ASCII value %d = %c",Val, Val);
 
  getch();
  return 0;
}