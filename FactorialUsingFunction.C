#include<stdio.h>
//Declaration of a function//
int fact(int num)
{
    int i,factorial=1;
    i=num;
    while(i>0){
        factorial*=i;
        i--;
    }
    return factorial;
}
int main()
{
    int num,factorial;
    printf("Enter a number-");
    scanf("%d",&num);
    factorial=fact(num); //Function Call//
    printf("%d",factorial);
    return 0;
}


