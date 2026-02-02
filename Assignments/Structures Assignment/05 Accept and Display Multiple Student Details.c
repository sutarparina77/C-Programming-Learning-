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
    struct Student S1 = {}, S2 = {}, S3 = {};

    ///Accept 1st Student Info
    printf("\n Enter Roll Number:");
    scanf("%d",&S1.Roll_No);

    fflush(stdin);
    printf("\n Enter Name:");
    gets(S1.Name);

    printf("\n Enter Marks:");
    scanf("%f",&S1.Marks);

    fflush(stdin);
    printf("\n Enter Address:");
    gets(S1.Address);

    ///Accept 2nd Student Info
    printf("\n Enter Roll Number:");
    scanf("%d",&S2.Roll_No);

    fflush(stdin);
    printf("\n Enter Name:");
    gets(S2.Name);

    printf("\n Enter Marks:");
    scanf("%f",&S2.Marks);

    fflush(stdin);
    printf("\n Enter Address:");
    gets(S2.Address);

    ///Accept 3rd Student Info
    printf("\n Enter Roll Number:");
    scanf("%d",&S3.Roll_No);

    fflush(stdin);
    printf("\n Enter Name:");
    gets(S3.Name);

    printf("\n Enter Marks:");
    scanf("%f",&S3.Marks);

    fflush(stdin);
    printf("\n Enter Address:");
    gets(S3.Address);

    system("cls");

    printf("\n Display student Details ==>");

    getch();

    printf("\n Display 1st student Info ==>");
    printf("\n Roll Number :%d", S1.Roll_No);
    printf("\n Name        :%s", S1.Name);
    printf("\n Marks       :%.2f", S1.Marks);
    printf("\n Address     :%s", S1.Address);

    printf("\n\n Display 2nd student Info ==>");
    printf("\n Roll Number :%d", S2.Roll_No);
    printf("\n Name        :%s", S2.Name);
    printf("\n Marks       :%.2f", S2.Marks);
    printf("\n Address     :%s", S2.Address);

    printf("\n\n Display 3rd student Info ==>");
    printf("\n Roll Number :%d", S3.Roll_No);
    printf("\n Name        :%s", S3.Name);
    printf("\n Marks       :%.2f", S3.Marks);
    printf("\n Address     :%s", S3.Address);

    getch();
    return 0;
}
