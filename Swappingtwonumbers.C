#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    printf("Enter the value of b:-");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("The swapped value of a is:-%d\n",a);
    printf("The swapped value of b is:-%d\n",b);
    return 0;

}