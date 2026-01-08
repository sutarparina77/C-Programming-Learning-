#include<stdio.h>
#include<conio.h>
int main()
{
  int Base = 0, Exp = 0, Temp = 0, Res = 0;
  
  printf("\n Enter a base :");
  scanf("%d",&Base);
  
  printf("\n Enter a exponential :");
  scanf("%d",&Exp);
  
  if(Base == 0 || Base == 1)
  {
    Res = Base;
  }
  else if(Exp < 0)
  {
    printf("\n Invalid Number");
    goto Dwn;
  }
  else
  {
    for(Res = 1, Temp = Exp; Temp > 0; Temp--)
    {
      Res = Res * Base;
    }
  }
  
  printf("\n Result of %d ^ %d is = %d", Base, Exp, Res);
  
  Dwn:
  getch();
  return 0;
}