#include <stdio.h>
#include <math.h>
//Function Declaration//
int hypotenuse(int p, int b){
    //Function definition//
    int hyp=sqrt(pow(p,2)+ pow(b,2));
    return hyp;
}
int main()
{
    int p,b,h;
    printf("Enter the base of the traingle:-");
    scanf("%d",&b);
    printf("Enter the perpendicular of the traingle:-");
    scanf("%d",&p);
    h=hypotenuse(p,b);//Function calling//
    printf("The hypotenuse of the triangle is %d",h);
    return 0;
}