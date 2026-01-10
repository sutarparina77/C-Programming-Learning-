#include<stdio.h>
#include<conio.h>
int main()
{
  int Num[7] = {0};
  
  printf("\n Enter an 7 Elements");
  
  printf("\n Enter 1st Element :");
  scanf("%d",&Num[0]);
  
  printf("\n Enter 2nd Element :");
  scanf("%d",&Num[1]);
  
  printf("\n Enter 3rd Element :");
  scanf("%d",&Num[2]);
  
  printf("\n Enter 4th Element :");
  scanf("%d",&Num[3]);
  
  printf("\n Enter 5th Element :");
  scanf("%d",&Num[4]);
  
  printf("\n Enter 6th Element :");
  scanf("%d",&Num[5]);
  
  printf("\n Enter 7th Element :");
  scanf("%d",&Num[6]);
  
  printf("\n Press Any key to see all 7 values \n");
  getch();
  
  printf("\n Value of 1st Element : %d", Num[0]);
  printf("\n Value of 2nd Element : %d", Num[1]);
  printf("\n Value of 3rd Element : %d", Num[2]);
  printf("\n Value of 4th Element : %d", Num[3]);
  printf("\n Value of 5th Element : %d", Num[4]);
  printf("\n Value of 6th Element : %d", Num[5]);
  printf("\n Value of 7th Element : %d", Num[6]);
 
  getch();
  return 0;
}