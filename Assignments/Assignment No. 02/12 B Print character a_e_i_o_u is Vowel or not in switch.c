#include<stdio.h>
#include<conio.h>
int main()
{
  char ch = '\0';
  
  printf("\n Enter a Character :");
  ch = getche();
 
  switch(ch)
  {
    case 'A' :
    case 'E' :
    case 'I' :
    case 'O' :
    case 'U' :  
    case 'a' :
    case 'e' :  
    case 'i' :  
    case 'o' :
    case 'u' :    
     
    printf("\n The character %c is Vowel.", ch);
    break;
  
    default :
  
    printf("\n The character %c is not Vowel.", ch);
    break ;
  }
  
  printf("\n Thanks");
  
  getch();
  return 0;
}
