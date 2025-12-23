#include<stdio.h>
#include<conio.h>
int main()
{
  int Count = 0;
  
  printf("\n Enter a Count =");
  scanf("%d",&Count);
  
  printf("\n OUTPUT ==> \n\n");
  
  while(Count > 0)
  {
    printf(" * ");
    Count--;
  }
  
  printf("\n\n THANKS");
  
  getch();
  return 0;
}