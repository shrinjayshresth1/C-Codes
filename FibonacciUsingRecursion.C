#include <stdio.h>
// Function declaration//
int fibonacci(int num) // Function definition//
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
        return (fibonacci(num-1) + fibonacci(num-2));
}
int main()
{
    int r,n,i=0;
    printf("Enter the number of terms in fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (i = 0; i< n; ++i)
    {
        r=fibonacci(i);
        printf("%d\n", r);
    }

    return 0;
}