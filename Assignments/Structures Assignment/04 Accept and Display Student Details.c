#include<stdio.h>
#include<conio.h>
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
    struct Student Stud = {};

    ///Accept Student Info
    printf("\n Enter Roll Number:");
    scanf("%d",&Stud.Roll_No);

    fflush(stdin);
    printf("\n Enter Name:");
    gets(Stud.Name);

    printf("\n Enter Marks:");
    scanf("%f",&Stud.Marks);

    fflush(stdin);
    printf("\n Enter Address:");
    gets(Stud.Address);

    system("cls");

    printf("\n Display student Details ==>");

    getch();

    printf("\n Roll Number :%d", Stud.Roll_No);
    printf("\n Name        :%s", Stud.Name);
    printf("\n Marks       :%.2f", Stud.Marks);
    printf("\n Address     :%s", Stud.Address);

    getch();
    return 0;
}
