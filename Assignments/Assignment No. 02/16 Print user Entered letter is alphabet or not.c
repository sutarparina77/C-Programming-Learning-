#include<stdio.h>
#include<conio.h>
int main()
{
  char ch = '\0';
  
  printf("\n Enter a Character : ");
  ch = getche();
  
  printf("\n Output ==> \n");
  
  if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
  {
    printf("\n True", ch);
  }
  else
  {
    printf("\n False", ch);
  }
  
  getch();
  return 0;
}
