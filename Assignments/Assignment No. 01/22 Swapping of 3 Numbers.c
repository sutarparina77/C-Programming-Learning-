#include<stdio.h>
#include<conio.h>
int main()
{
  int N1 = 0, N2 = 0, N3 = 0, Temp = 0;
  
  printf("\n Enter 1st Number");
  scanf("%d",&N1);
  
  printf("\n Enter 2nd Number");
  scanf("%d",&N2);
  
  printf("\n Enter 3rd Number");
  scanf("%d",&N3);
  
  printf("\n Numbers Before Swapping: N1 = %d, N2 = %d, N3 = %d", N1, N2, N3);
  
  getch();
  
  //swap logic 
  Temp = N1;
  N1 = N3;
  N3 = N2;
  N2 = Temp;
  
  printf("\n Numbers After Swapping: N1 = %d, N2 = %d, N3 = %d", N1, N2, N3);
  
  getch();
  return 0;
}