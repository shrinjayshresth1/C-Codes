#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character:-");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("The entered character is in upper case.In lower case ,it is:%c\n",(ch+32));
    }
    if (ch >= 'a' && ch <= 'z'){
        printf("The entered character is in upper case.In upper case ,it is:%c\n", (ch-32));
    }
    return 0;
}