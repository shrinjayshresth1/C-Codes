#include<stdio.h>
// Function declaration//
int sum(int a, int b)
{
    int result = a + b;
    return result;
}
int main()
{
    int num1,num2,total=0;
    printf("Enter the two numbers:-");
    scanf("%d %d",&num1,&num2);
    total=sum(num1,num2);//Function call//
    printf("The sum is %d",total);
    return 0;
}
