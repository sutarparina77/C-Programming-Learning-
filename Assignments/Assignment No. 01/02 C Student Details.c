#include<stdio.h>
#include<conio.h>
int main()
{
  int R_No = 12345;
  char Name[20] = "Ajay";
  char Course[12] = "Computer Science";
  char City[16] = "Pune";
  
  printf("\n\t\t\"Student Information\"\n");
  
  printf("\n Roll Number  : %d", R_No);
  printf("\n Student Name : %s", Name);
  printf("\n Course Name  : %s", Course);
  printf("\n City Name    : %s", City);
  
  getch();
  return 0;
}
