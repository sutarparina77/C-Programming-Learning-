#include<stdio.h>
#include<conio.h>
int main()
{
  char ch = '\0';
  
  printf("\n Enter a Character :");
  scanf("%c",&ch);
 
  if(ch == 'A'|| ch =='E'|| ch == 'I'|| ch == 'O'|| ch == 'U'|| ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
  {
    printf("\n The character %c is Vowel.", ch);
  }
  else
  {
    printf("\n The character %c is not Vowel.", ch);
  }
  
  printf("\n Thanks");
  
  getch();
  return 0;
}