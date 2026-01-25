#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
  int Bill[size] = {}, i = 0, Occur = 0;
  
  for(i = 0; i < size; i++)
  {
    printf("\n Enter bill No %d:",i+1);
    scanf("%d",&Bill[i]);
  }
  
  printf("\n Enter bill for their 1st occurance:", Occur);
  scanf("%d",&Occur);
  
  for(i = 0; i < size; i++)
  {
    if(Bill[i] == Occur)
    {
      break;
    }
  }
  
  printf("\n bill %d firstly occur at index %d", Bill[i], i);
 
  getch();
  return 0;
}