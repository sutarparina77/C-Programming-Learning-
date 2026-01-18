#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
  int Bill[size] = {}, i = 0, s_Ele = 0;
  
  for(i = 0; i < size; i++)
  {
    printf("\n Enter bill No %d:",i+1);
    scanf("%d",&Bill[i]);
  }
  
  printf("\n Enter element to be searched in array :");
  scanf("%d",&s_Ele);
  
  for(i = 0; i < size; i++)
  {
    if(Bill[i] == s_Ele)
    {
      break;
    }
  }

  if(i == size)
  {
    printf("\n No this element found in given array");
  }
  else
  {
    printf("\n element %d found at location %d:", Bill[i], i+1);
  }
 
  getch();
  return 0;
}