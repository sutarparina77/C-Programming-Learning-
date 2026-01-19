#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
  int Bill[size] = {}, i = 0, S_Bill = 0;
  
  for(i = 0; i < size; i++)
  {
    printf("\n Enter bill No %d:",i+1);
    scanf("%d",&Bill[i]);
  }
  
  printf("\n Enter bill to be searched in array :");
  scanf("%d",&S_Bill);
  
  for(i = 0; i < size; i++)
  {
    if(Bill[i] == S_Bill)
    {
      break;
    }
  }
  
  printf("\n Searched bill %d found at index %d", Bill[i], i);
 
  getch();
  return 0;
}   printf("\n element %d found at index %d:", Bill[i], i);
  }
 
  getch();
  return 0;
}