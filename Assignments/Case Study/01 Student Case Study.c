#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
    int R_No;
    char Name[40];
    int Phy;
    int Chem;
    int Maths;
    float Total;
    float Per;
};

int main()
{
    struct Stud S1;

    S1.R_No = 101;
    strcpy(S1.Name, "Rohit Sharma");
    S1.Phy = 79;
    S1.Chem = 89;
    S1.Maths = 90;

    S1.Total = S1.Phy + S1.Chem + S1.Maths;

    S1.Per = (S1.Total/300) * 100;

    printf("\n ---- STUDENT INFORMATION ----\n");

    printf("\n Roll No.    : %d", S1.R_No);
    printf("\n Name        : %s", S1.Name);
    printf("\n Total Marks : %.0f", S1.Total);
    printf("\n Percentage  : %.3f", S1.Per);

    printf("\n\n THANKS");

    getch();
    return 0;
}
