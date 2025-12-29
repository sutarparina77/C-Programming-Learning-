#include<stdio.h>
#include<conio.h>
int main()
{
    int R_No = 0, Tot_Marks = 0;
    char Grade = '\0', Name[20] = "\o", Course[12] = "\0", City[8] = "\0";
    float Per = 0.0;

    printf("\n\t\t \" Student Details\"\n");

    printf("\n Enter Roll Number:");
    scanf("%d",&R_No);

    fflush(stdin);

    printf("\n Enter Student Name:");
    gets(Name);

    fflush(stdin);

    printf("\n Enter Course Name:");
    gets(Course);

    fflush(stdin);

    printf("\n Enter City Name:");
    gets(City);

    printf("\n Enter Total Marks:");
    scanf("%d",&Tot_Marks);

    printf("\n Enter Percentage:");
    scanf("%f",&Per);

    fflush(stdin);

    printf("\n Enter Obtained Grade:");
    Grade = getche();

    printf("\n Press Any Key to see student details ===> \n");

    system("cls");

    printf("\n\t\t Student Information\n");

    printf("\n Roll No    : %d, Student Name     :%s, Course name    : %s, City Name   :%s, Total Marks   : %d, percentage   : %f, Grade    : %c", R_No, Name, Course, City, Tot_Marks, Per, Grade);

    getch();
    return 0;
}
