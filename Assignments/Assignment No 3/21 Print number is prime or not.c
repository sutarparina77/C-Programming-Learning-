#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0, i = 0;
  
  printf("\n Enter any positive integer :");
  scanf("%d",&No);
  
  if(No < 1)
  {
    printf("\n Invalid Number");
  }
  for(i = 2; i < No; i++)
  {
    if(No % i == 0)
    {
      break;
    }
  }
  if(No == i)
  {
    printf("\n Number is prime",No);
  }
  else
  {
    printf("\n Number is Not prime",No);
  }
  
  getch();
  return 0;
}