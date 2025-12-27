#include<stdio.h>
#include<conio.h>
int main()
{
  int N1 = 0, N2 = 0, Temp = 0;
  
  printf("\n Enter the 1st Number");
  scanf("%d",&N1);
  
  printf("\n Enter the 2nd Number");
  scanf("%d",&N2);
  
  printf("\n Numbers Before Swapping is Number1 = %d, Number 2 = %d", N1, N2);
  
  getch();
  
  //Swap logic
  Temp = N1;
  N1 = N2;
  N2 = Temp;
  
  printf("\n Numbers After Swapping is Number1 = %d, Number2 = %d", N1, N2);
  
  getch();
  return 0;
}