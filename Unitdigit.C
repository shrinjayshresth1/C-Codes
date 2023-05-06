#include <stdio.h>
#include <conio.h>
int main()
{
    int n,digit;
    printf("Enter a number:-");
    scanf("%d",&n);
    digit=n%10;
    printf("The unit digit in the given number-%d is %d",n,digit);
    return 0;
}