#include<stdio.h>
#include<conio.h>
int main()
{
  char ch = '\0';
  
  printf("\n Enter a Character : ");
  ch = getche();
  
  if(ch >= 'A' && ch <= 'Z')
  {
    ch = ch + 32;
    printf("\n Before conversion of character to lower case is %c \n", ch);
  }
  else
  {
    printf("\n After conversion of character to lower case is %c \n", ch);
  }
  
  getch();
  return 0;
}
