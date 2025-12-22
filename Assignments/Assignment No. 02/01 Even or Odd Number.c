#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0;
  
  printf("\n Enter The Number:");
  scanf("%d",&Num);
  
  if(Num % 2 == 0)
  {
    printf("\n Number is Even");
  }
  else
  {
    printf("\n Number is Odd");
  }
  
  getch();
  return 0;
}