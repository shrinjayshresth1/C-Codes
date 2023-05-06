#include<stdio.h>
#include<conio.h>
int main()
{
    char s[100];
    printf("Enter your name\n");
    fgets(s,100,stdin);
    printf("Your name is %s",s);
    return 0;
}