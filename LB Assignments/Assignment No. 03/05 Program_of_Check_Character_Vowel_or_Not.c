#include<stdio.h>
#include<conio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char Val);

int main()
{
    char Val = '\0';
    BOOL bRet = FALSE;

    printf("\n Enter a Character:");
    scanf("%c",&Val);

    bRet = ChkVowel(Val);

    if(bRet == TRUE)
    {
        printf("It is a Vowel.");
    }
    else
    {
        printf("It is not Vowel.");
    }

    getch();
    return 0;
}

BOOL ChkVowel(char Val)
{
    if(Val == 'a' || Val == 'e' || Val == 'i' || Val == 'o' || Val == 'u' || Val == 'A' || Val == 'E' || Val == 'I' || Val == 'O' || Val == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
