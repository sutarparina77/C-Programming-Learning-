#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0;
    
  printf("\n Enter The Number:");
  scanf("%d",&Num);
  
  (Num % 2 == 0) ? printf("\n Number is Even") : printf("\n Number is Odd");
  
  printf("\n THANKS");
  
  getch();
  return 0;
}