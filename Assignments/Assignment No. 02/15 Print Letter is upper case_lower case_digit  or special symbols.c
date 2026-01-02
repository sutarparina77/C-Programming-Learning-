#include<stdio.h>
#include<conio.h>
int main()
{
  char ch ='\0';
  
  printf("\n Enter a Character");
  ch = getche();
  
  if(ch >= 'A' && ch <= 'Z')
  {
    printf("\n The character %c is upper case.",ch);
  }
  else if(ch >= 'a' && ch <= 'z')
  {
    printf("\n The character %c is lower case.",ch);
  }
  else if(ch >= '0' && ch <= '9')
  {
    printf("\n The character %c is digit.",ch);
  }
  else
  {
    printf("\n The character %c is special symbols.",ch);
  }
  
  getch();
  return 0;
}
