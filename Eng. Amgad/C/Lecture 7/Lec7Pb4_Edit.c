#include<stdio.h>

int fibarr(int term);

int main()
{
    int term1 = 0, term2 = 1;
    int i, num;
    int fib[30];

    fib[0] = term1;
    fib[1] = term2;

    for (i = 2; i < 30; i++)
    {
        fib[i] = term1 + term2;
        term1 = term2;
        term2 = fib[i];
    }

    printf("Enter The required Term From 1 To 30: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 30)
    {
        printf("Value of term %d in Fibonacci Series: %d\n", num, fib[num]);
        printf("Using Recursion Value of term %d in Fibonacci Series: %d\n", num, fibarr(num));
    }
    else
    {
        printf("Invalid Term\n");
    }

    return 0;
}

int fibarr(int term)
{
    if (term <= 1)
    {
        return term;
    }
    else
    {
        return fibarr(term - 1) + fibarr(term - 2);
    }
}
