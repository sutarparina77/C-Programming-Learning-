#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0;
  
  printf("\n Enter The Number");
  scanf("%d",&Num);
  
  if((Num % 5 == 0) && (Num % 7 == 0))
  {
    printf("\n Number is Divisible by Both 5 and 7");
  }
  else if(Num % 5 == 0)
  {
    printf("\n Number is Divisible by 5 ");
  }
  else if(Num % 7 == 0)
  {
    printf("\n Number is Divisible by 7");
  }
  else
  {
    printf("\n Number is Not Divisible by Both 5 and 7");
  }
  
  printf("\n THANKS");
  
  getch();
  return 0;
}