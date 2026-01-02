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
    printf("\n Conversion of character to lower case is %c \n", ch);
  }
  else if(ch >= 'a' && ch <= 'z')
  {
    ch = ch - 32;
    printf("\n Conversion of character to Upper case is %c \n.", ch);
  }
  else
  {
    printf("\n The character is not a letter");
  }
  
  getch();
  return 0;
}
