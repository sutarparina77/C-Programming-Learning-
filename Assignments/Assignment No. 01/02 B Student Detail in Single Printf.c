#include<stdio.h>
#include<conio.h>
int main()
{
  int R_No = 45, Tot_Marks = 600;
  char Grade = 'A', Name[20] ="Rohit", Course[8] ="BCS";
  float Per = 84.7344;
  
  printf("\n\t\t \"Student Information\"");
  
  printf("\n Roll Number      : %d. \n Total Marks        : %d.\n Grade                 : %c.\n Student Name  : %s.\n Course               : %s", R_No, Tot_Marks, Grade, Name, Course, Per);
  
  getch();
  return 0;
}