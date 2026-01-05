#include<stdio.h>
#include<conio.h>
int main()
{
  char ch = '\0';
  
  printf("\n Enter a letter :");
  scanf("%c",&ch);
  
  if(ch >= 'A' && ch <= 'Z')
  {
    while(ch <= 'Z')
    {
      printf(" %c ", ch);
      ch++;
    }
  }
  else if(ch >= 'a' && ch <= 'z')
  {
    while(ch >= 'a')
    {
      printf(" %c ", ch);
      ch--;
    }
  }
  else
  {
    printf("\n Invalid");
  }
  printf("\n Thanks");
  
  getch();
  return 0;
}