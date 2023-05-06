#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,sum=0,r;
    printf("Enter a number to check:-");
    scanf("%d",&num);
    n=num;
    while(n>0){
        r=n%10;
        sum+=pow(r,3);
        n=n/10;
    }
    if(sum==num){
        printf("%d is an armstrong number\n",num);
    }
    else{
        printf("%d is not an armstrong number\n",num);
    }
    return 0;
}