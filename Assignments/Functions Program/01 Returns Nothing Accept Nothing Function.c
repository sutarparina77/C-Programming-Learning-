#include<stdio.h>
#include<conio.h>
void Add();      ///Function Declaration 
int main()
{
  Add();        ///Function Call
  getch();
  return 0;
}
void Add()        ///Function Definition 
{
  int N1 = 0, N2 = 0, Sum = 0;
 
  printf("\n Enter 2 numbers for addition:");
  scanf("%d%d",&N1,&N2);
  
  Sum = N1 + N2;
  
  printf("\n The Sum of %d and %d: %d", N1, N2, Sum);
  
  return;
}