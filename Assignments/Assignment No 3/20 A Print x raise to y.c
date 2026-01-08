#include<stdio.h>
#include<conio.h>
int main()
{
  int Base = 0, Exp = 0, Temp = 0, Res = 1;
  
  printf("\n Enter a base :");
  scanf("%d",&Base);
  
  printf("\n Enter a exponential :");
  scanf("%d",&Exp);
  
  Temp = Exp;
  
  while(Temp > 0)
  {
    Res = Res * Base;
    Temp--;
  }
  
  printf("\n Result of %d ^ %d is = %d", Base, Exp, Res);
  
  getch();
  return 0;
}