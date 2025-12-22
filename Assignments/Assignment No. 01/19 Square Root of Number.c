#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0, Sqr_Root = 0;
  
  printf("\n Enter The Number");
  scanf("%d",&Num);
  
  Sqr_Root = sqrt(Num);
  
  printf("\n Square Root of Number: %d", Sqr_Root);
  
  getch();
  return 0;
}