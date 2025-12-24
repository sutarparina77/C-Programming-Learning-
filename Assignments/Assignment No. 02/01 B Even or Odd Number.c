#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0;
  
  up:
    
  printf("\n Enter The Number:");
  scanf("%d",&Num);
  
  if(Num % 2 == 0)
  {
    printf("\n Number is Even");
    goto up;
  }
  else
  {
    printf("\n Number is Odd");
  }
  
  printf("\n THANKS");
  
  getch();
  return 0;
}