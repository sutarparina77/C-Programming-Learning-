#include<stdio.h>
#include<conio.h>
int main()
{
  char Div = '\0';
  
  printf("\n Enter The Division (A/B/C/D)");
  scanf("%c",&Div);
  
  switch(Div)
  {
    case 'A':
    case 'a':
      printf("\n Exam of division A at 10 AM");
      break;
      
    case 'B':
    case 'b': 
      printf("\n Exam of division B at 10.30 AM");
      break; 
      
    case 'C':
    case 'c':  
      printf("\n Exam of division C at 1 PM");
      break; 
      
    case 'D':
    case 'd': 
      printf("\n Exam of division D at 1.30 PM");
      break; 
      
    default:
      printf("\n Invalid Division Entered");
      break; 
  }
  
  getch();
  return 0;
}
