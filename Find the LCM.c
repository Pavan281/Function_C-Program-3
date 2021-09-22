# Function_C-Program-3
# Write a program in C to find the LCM of two numbers using recursion.

#include <stdio.h>
int lcm(int, int);
void main()
{
    int a, b, result;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    result = lcm(a, b);
    printf("LCM of %d and %d is %d\n", a, b, result);
}
int lcm(int a, int b)
{
    static int com = 1;
    if (com % a == 0 && com % b == 0)
    {
        return com;
    }
    com++;
    lcm(a, b);
    return com;
}
