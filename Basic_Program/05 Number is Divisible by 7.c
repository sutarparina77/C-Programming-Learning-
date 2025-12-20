#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0;
  
  printf("\n Enter The Number");
  scanf("%d",&Num);
  
  if(Num % 7 == 0)
  {
    printf("\n Number is Divisible by 7");
  }
  else
  {
    printf("\n Number is not Divisible by 7");
  }
  getch();
  return 0;
}