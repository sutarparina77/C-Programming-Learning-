#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0;
  
  printf("\n Enter The Number : ");
  scanf("%d",&No);
  
  if(No < 10)
  {
    printf("\n\"Hello\"");
  }
  else
  {
    printf("\n\"World\"");
  }
  
  getch();
  return 0;
}