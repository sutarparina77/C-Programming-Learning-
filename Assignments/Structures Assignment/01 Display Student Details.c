#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Student 
{
  int RollNo;
  char Name[20];
  float Marks;
  char Address[20];
};
int main()
{
  struct Student S1;
  S1.RollNo = 21;
  strcpy(S1.Name,"Virat");
  S1.Marks = 80.70;
  strcpy(S1.Address,"Mumbai");
  
  printf("\n Display Student Details ==>\n");
  
  printf("\n RollNo  : %d", S1.RollNo);
  printf("\n Name    : %s", S1.Name);
  printf("\n Marks   : %.2f", S1.Marks);
  printf("\n Address : %s", S1.Address);
  
  getch();
  return 0;
}