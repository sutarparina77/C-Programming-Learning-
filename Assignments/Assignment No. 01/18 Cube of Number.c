#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0, Cube = 0;
  
  printf("\n Enter The Number");
  scanf("%d",&Num);
  
  Cube = Num * Num * Num;
  
  printf("\n Cube of Number : %d", Cube);
  
  getch();
  return 0;
}