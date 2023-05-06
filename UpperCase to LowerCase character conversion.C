#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character:-");
    scanf("%c",&ch);
    printf("The ASCII value of the character %c is %c",ch,ch+32);
    return 0;
} 