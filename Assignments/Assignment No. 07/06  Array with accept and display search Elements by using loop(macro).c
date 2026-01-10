#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int main()
{
  int Bill[size] = {0,2,6,8,9}, i = 0, Ele = 0;
 
  printf("\n Enter element to be searched in array:");
  scanf("%d",&Ele);
  
  getch();
  
  for(i = 0; i < size; i++)
  {
    if(Bill[i] == Ele)
    {
      break;
    }
  }
  
  printf("\n Element %d found at index %d", Ele, i);
  
  getch();
  return 0;
}
