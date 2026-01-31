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
  struct Student S1, S2, S3;
  
  S1.RollNo = 21;
  strcpy(S1.Name,"Virat");
  S1.Marks = 80.70;
  strcpy(S1.Address,"Mumbai");
  
  S2.RollNo = 22;
  strcpy(S2.Name,"Rohit");
  S2.Marks = 85.50;
  strcpy(S2.Address,"Pune");
  
  S3.RollNo = 22;
  strcpy(S3.Name,"Surya");
  S3.Marks = 90.88;
  strcpy(S3.Address,"Satara");
  
  printf("\n Display Student Details ==>\n");
  
  printf("\n Display 1st Student Info ==>");
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