#include<stdio.h>
#include<conio.h>
int main()
{
  char ch = '\0';
  
  printf("\n Enter a Character (toggle case): ");
  ch = getche();
  
  if(ch >= 'A' && ch <= 'Z')
  {
    ch = ch + 32;
    printf("\n %c", ch);
  }
  else if(ch >= 'a' && ch <= 'z')
  {
    ch = ch - 32;
    printf("\n %c .", ch);
  }
  
  printf("\n After toggle case : %c\n", ch);
  
  getch();
  return 0;
}
