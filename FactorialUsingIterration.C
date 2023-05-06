#include <stdio.h>
int main()
{
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of term:-");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Invalid input!");
    }
    printf("Fibonacci series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d\n", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}