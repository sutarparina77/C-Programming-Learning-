#include<stdio.h>
#include<conio.h>
int main()
{
  int Year = 0;
  
  printf("\n Enter The Year");
  scanf("%d",&Year);
  
  if(Year < 1000 || Year > 9999)
  {
    printf("\n Invalid Year");
  }
  else if(Year % 4 == 0)
  {
    printf("\n Year is Leap Year");
  }
  else
  {
    printf("\n Year is Not Leap Year");
  }
  printf("\n Thanks");
  
  getch();
  return 0;
}