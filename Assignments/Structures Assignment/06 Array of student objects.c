#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
    int Roll_No;
    char Name[24];
    float Marks;
    char Address[20];
};
int main()
{
    int i = 0;
    struct student studlist[4] = {};

    for(i = 0; i < 4; i++)
    {
        printf("\n Enter Student %d details ==>",i+1);

        printf("\n Enter Roll Number:");
        scanf("%d",&studlist[i].Roll_No);

        fflush(stdin);
        printf("\n Enter a Name:");
        gets(studlist[i].Name);

        fflush(stdin);

        printf("\n Enter Marks:");
        scanf("%f",&studlist[i].Marks);

        fflush(stdin);
        printf("\n Enter Address:");
        gets(studlist[i].Address);
    }
    system("cls");
    printf("\n Display student details===>");
    getch();

    for(i = 0; i < 4; i++)
    {
        printf("\n\n %d student info==>",i+1);

        printf("\n Roll Number : %d",studlist[i].Roll_No);
        printf("\n Name : %s",studlist[i].Name);
        printf("\n Marks : %f",studlist[i].Marks);
        printf("\n Address : %s",studlist[i].Address);
    }
    getch();
    return 0;
}






