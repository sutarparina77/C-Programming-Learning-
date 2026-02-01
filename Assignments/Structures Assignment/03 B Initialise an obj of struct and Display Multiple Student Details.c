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
  struct Student S1 = {21, "Virat", 80.70, "Mumbai"};
  struct Student S2 = {22, "Surya", 90.77, "Pune"};
  struct Student S3 = {21, "Rohit", 96.73, "Satara"};
  
  printf("\n Display Student Details ==>");
  
  printf("\n\n Display 1st Student Info ==>");
  printf("\n RollNo  : %d", S1.RollNo);
  printf("\n Name    : %s", S1.Name);
  printf("\n Marks   : %.2f", S1.Marks);
  printf("\n Address : %s", S1.Address);
  
  printf("\n\n Display 2nd Student Info ==>");
  printf("\n RollNo  : %d", S2.RollNo);
  printf("\n Name    : %s", S2.Name);
  printf("\n Marks   : %.2f", S2.Marks);
  printf("\n Address : %s", S2.Address);
  
  printf("\n\n Display 3rd Student Info ==>");
  printf("\n RollNo  : %d", S3.RollNo);
  printf("\n Name    : %s", S3.Name);
  printf("\n Marks   : %.2f", S3.Marks);
  printf("\n Address : %s", S3.Address);
  
  getch();
  return 0;
}