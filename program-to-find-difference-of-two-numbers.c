//C-program to find Difference of two binary numbers
#include <stdio.h>
int main()
{
long a, b; 
int i = 0, borrow = 0, diff[20];
printf("Enter the first binary number: ");
scanf("%ld", &a);
printf("Enter the second binary number: ");
scanf("%ld", &b); 

while (a != 0 || b != 0)
{
    int bit_a = a % 10;
    int bit_b = b % 10;
    
    int result = bit_a - bit_b - borrow;
    
    if (result < 0) {
        result += 2;
        borrow = 1;
    } else {
        borrow = 0;
    }
    
    diff[i++] = result;
    a = a / 10;
    b = b / 10;
}

printf("Difference of two binary numbers: ");
if (i == 0) {
    printf("0");
} else {
    while (i > 0) {
        printf("%d", diff[--i]);
    }
}
printf("\n");
return 0;
}