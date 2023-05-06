#include <stdio.h>
float average(int a)
{
    int i,sum=0;
    for (i=1;i<=a;i++)
    {
        sum+=i;
    }
    return (float)sum/a;
}
int main()
{
    int num;
    float avg;
    printf("Enter a number-");
    scanf("%d",&num);
    avg=average(num);
    printf("The average of the numbers from 1 to %d is %.2f",num,avg);
    return 0;
}