#include<stdio.h>
#include<conio.h>
int main()
{
  int Num[7] = {}, i = 0;
  
  printf("\n Enter all 7 Elements");
  
  for(i = 1; i <= 7; i++)
  {
    printf("\n Enter Element No %d : ", i);
    scanf("%d",&Num[i]);
  }
  
  printf("\n Press Any key to see all 7 values \n");
  getch();
  
  for(i = 1; i <= 7; i++)
  {
    printf("\n Value of %d Element : %d", i, Num[i]);
  }
  
  getch();
  return 0;
}