#include<stdio.h>
#include<conio.h>
int main()
{
  char Oper = '\0';
  int No1 = 0, No2 = 0, Result = 0;
  
  printf("\n Enter an Operator (+,-,*,/,%)");
  scanf("%c",&Oper);
  
  printf("\n Enter First Number :");
  scanf("%d",&No1);
  
  printf("\n Enter Second Number :");
  scanf("%d",&No2);
  
  switch(Oper)
  {
    case '+':
      Result = No1 + No2;
      printf("\n Addition of %d + %d = %d", No1, No2, Result);
      break;
      
    case '-':
      Result = No1 - No2;
      printf("\n Subtraction of %d - %d = %d", No1, No2, Result);
      break;
  
    case '*':
      Result = No1 * No2;
      printf("\n Multiplication of %d * %d = %d", No1, No2, Result);
      break;
  
    case '/':
      Result = No1 / No2;
      printf("\n Division of %d / %d = %d",No1, No2, Result);
      break;
  
    case '%':
      Result = No1 % No2;
      printf("\n Modulus of %d %% %d = %d", No1, No2, Result);
      break;
  
    default :
      printf("\n Invalid Operator");
      break;
  }
  
  printf("\n Thanks For using Calculator...");
  
  getch();
  return 0;
}