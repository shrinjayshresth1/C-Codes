#include<stdio.h>
int greater(int a, int b, int c); //Function Declaration//
int main()
{
    int a,b,c,greatest;
    printf("Enter first number-\n");
    scanf("%d",&a);
    printf("Enter second number-\n");
    scanf("%d", &b);
    printf("Enter third number-\n");
    scanf("%d", &c);
    greatest=greater(a,b,c); //Function calling//
    printf("Greatest is %d",greatest);
    return 0;
}
//Function Definition//
int greater(int a, int b, int c)
{
    if((a>b)&&(a>c))
    {
        return a;
    }
    if((b>a)&& (b>c))
    {
        return b;
    }
    else{
        return c;
    }
}