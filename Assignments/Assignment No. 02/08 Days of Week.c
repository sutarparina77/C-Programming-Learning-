#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0;
  
  printf("\n Enter The Number ");
  scanf("%d",&Num);
  
  if(Num == 1)
  {
    printf("\n\n The day of the week is Monday");
  }
  else if(Num == 2)
  {
    printf("\n\n The day of the week is Tuesday ");
  }
  else if(Num == 3)
  {
    printf("\n\n The day of the week is Wednesday");
  }
  else if(Num == 4)
  {
    printf("\n\n The day of the week is Thursday");
  }
  else if(Num == 5)
  {
    printf("\n\n The day of the week is Friday");
  }
  else if(Num == 6)
  {
    printf("\n\n The day of the week is Saturday");
  }
  else if(Num == 7)
  {
    printf("\n\n The day of the week is Sunday");
  }
  else
  {
    printf("\n\n Invalid Day");
  }
  getch();
  return 0;
}