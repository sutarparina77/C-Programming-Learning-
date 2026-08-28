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

    printf("\n ENTER STUDENT DETAILS ===>\n");

    printf("\n Enter Student Roll No : ");
    scanf("%d",&S1.R_No);

    printf("\n Enter Student Name : ");
    scanf("%s",&S1.Name);

    printf("\n Enter Physics Marks : ");
    scanf("%d",&S1.Phy);

    printf("\n Enter Chemistry Marks : ");
    scanf("%d",&S1.Chem);

    printf("\n Enter Mathematics Marks : ");
    scanf("%d",&S1.Maths);

    S1.Total = S1.Phy + S1.Chem + S1.Maths;

    S1.Per = (S1.Total/300) * 100;

    getch();

    printf("\n ---- STUDENT INFORMATION ----\n");

    printf("\n Roll No.          : %d", S1.R_No);
    printf("\n Name              : %s", S1.Name);
    printf("\n Physics Marks     : %d", S1.Phy);
    printf("\n Chemistry Marks   : %d", S1.Chem);
    printf("\n Mathematics Marks : %d", S1.Maths);
    printf("\n Total Marks       : %.0f", S1.Total);
    printf("\n Percentage        : %.3f", S1.Per);

    printf("\n\n THANKS");

    getch();
    return 0;
}
