#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
    int Roll_No;
    char Name[20];
    float Marks;
    char Address[20];
};
int main()
{
    struct Student S1, S2, S3;

    S1.Roll_No = 21;
    strcpy(S1.Name,"Virat");
    S1.Marks = 90.37;
    strcpy(S1.Address,"Mumbai");

    S2.Roll_No = 22;
    strcpy(S2.Name,"Surya");
    S2.Marks = 92.78;
    strcpy(S2.Address,"Pune");

    S3.Roll_No = 23;
    strcpy(S3.Name,"Rohit");
    S3.Marks = 95.34;
    strcpy(S3.Address,"satara");

    printf("\n Display Student Details ==>\n");

    printf("\n Display 1st Student Info ==>\n");
    printf("\n Roll Number :%d",S1.Roll_No);
    printf("\n Name        :%s",S1.Name);
    printf("\n Marks       :%.2f",S1.Marks);
    printf("\n Address     :%s",S1.Address);

    printf("\n Display 2nd Student Info ==>\n");
    printf("\n Roll Number :%d",S2.Roll_No);
    printf("\n Name        :%s",S2.Name);
    printf("\n Marks       :%.2f",S2.Marks);
    printf("\n Address     :%s",S2.Address);

    printf("\n Display 3rd Student Info ==>\n");
    printf("\n Roll Number :%d",S3.Roll_No);
    printf("\n Name        :%s",S3.Name);
    printf("\n Marks       :%.2f",S3.Marks);
    printf("\n Address     :%s",S3.Address);

    getch();
    return 0;
}
