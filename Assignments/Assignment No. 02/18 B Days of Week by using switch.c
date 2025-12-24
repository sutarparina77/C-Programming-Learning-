#include<stdio.h>
#include<conio.h>
int main()
{
  char Day ='\0';
  
  printf("\n Enter a Day Number from 1-7");
  scanf("%c",&Day);
  
  switch(Day)
  {
    case '1':
      printf("\n The Day of the week is Monday");
      break;
      
    case '2':
      printf("\n The Day of the week is Tuesday");
      break;
  
    case '3':
      printf("\n The Day of the week is Wednesday");
      break;
  
    case '4':
      printf("\n The Day of the week is Thursday");
      break;
  
    case '5':
      printf("\n The Day of the week is Friday");
      break;
  
    case '6':
      printf("\n The Day of the week is Saturday");
      break;
  
    case '7':
      printf("\n The Day of the week is Sunday");
      break;
  
    default :
      printf("\n The Day of the week is Invalid");
      break;
  }
  
  printf("\n THANKS");
  
  getch();
  return 0;
}