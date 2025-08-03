//C-program to find Product of two binary numbers
#include <stdio.h>
int binaryproduct(int, int);

int main()
{
    long a, b, p = 0;
    int digit, factor = 1;
    
    printf("Enter the first binary number: ");
    scanf("%ld", &a);
    printf("Enter the second binary number: ");
    scanf("%ld", &b);
    
    while (b != 0)
    {
        digit = b % 10;
        if (digit == 1)
        {
            p = binaryproduct(a, p);
        }
        a = a * 10;  // Shift left for next position
        b = b / 10;
    }
    
    printf("Product of two binary numbers: %ld", p);
    return 0;
}
int binaryproduct(int a, int b)
{
    int i = 0, c = 0, sum[20];
    int bp = 0;
    
    while (a != 0 || b != 0)
    {
        sum[i++] = (a % 10 + b % 10 + c) % 2;
        c = (a % 10 + b % 10 + c) / 2;
        a = a / 10;
        b = b / 10;
    }
    if (c != 0) 
        sum[i++] = c;
    
    --i;
    while (i >= 0)
        bp = bp * 10 + sum[i--];
    
    return bp;
}