#include<stdio.h>
#include<conio.h>
int main()
{
  char ch = '\0';
  
  printf("\n Enter a character :");
  scanf("%c",&ch);
  
  printf("\n\n ASCII value of %c is = %d.",ch, ch);
  
  getch();
  return 0;
}