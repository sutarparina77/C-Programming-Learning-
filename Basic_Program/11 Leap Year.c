#include<stdio.h>
#include<conio.h>
int main()
{
  int Year = 0;
  
  printf("\n Enter The Year");
  scanf("%d",&Year);
  
  if(Year % 4 == 0)
  {
    printf("\n Year is Leap Year");
  }
  else
  {
    printf("\n Year is Not Leap Year");
  }
  getch();
  return 0;
}