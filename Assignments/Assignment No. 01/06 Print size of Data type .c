#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0;
  char ch = '\0';
  double No = 0.0;
  
  printf("\n Size 1 = %d", sizeof(Num));
  printf("\n Size 2 = %d", sizeof(No));
  printf("\n Size 3 = %d", sizeof(long int));
  printf("\n Size 4 = %d", sizeof(ch));
  printf("\n Size 5 = %d", sizeof(float));
  printf("\n Size 6 = %d", sizeof(char*));
  printf("\n Size 7 = %d", sizeof(int));
  
  getch();
  return 0;
}