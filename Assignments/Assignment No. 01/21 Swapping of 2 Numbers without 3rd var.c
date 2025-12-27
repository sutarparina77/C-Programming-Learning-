#include<stdio.h>
#include<conio.h>
int main()
{
  int N1 = 0, N2 = 0;
  
  printf("\n Enter 1st Number");
  scanf("%d",&N1);
  
  printf("\n Enter 2nd Number");
  scanf("%d",&N2);
  
  printf("\n Numbers Before Swapping: No1 = %d, No2 = %d", N1,N2);
  
  getch();
  
  //swap logic 
  N1 = N1 + N2;
  N2 = N1 - N2;
  N1 = N1 - N2;
  
  printf("\n Numbers After Swapping: No1 = %d, No2 = %d", N1, N2);
  
  getch();
  return 0;
}