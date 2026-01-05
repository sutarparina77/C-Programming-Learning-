#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0, Cnt = 1, Sum = 0;
  
  printf("\n Enter all 10 numbers : \n");
  
  for(Cnt = 1; Cnt <=10; Cnt++)
  {
    printf("\n Enter a no %d :", Cnt);
    scanf("%d",&Num);
    
    Sum = Num + Sum;
  }
  
  printf("\n Sum of 10 numbers is = %d", Sum);
  
  printf("\n Thanks for visiting");
  
  getch();
  return 0;
}