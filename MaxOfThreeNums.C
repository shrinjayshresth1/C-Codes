#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the three numbers:-");
    scanf("%d,%d,%d",&a,&b,&c);
    max=a>b?(a>c?a:c):(b>c?b:c);
    printf("The largest of the given three numbers is  %d ",max);                                                                                                                                     
    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
}