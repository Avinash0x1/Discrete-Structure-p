//C program to implement Euclidian algorithms
#include<stdio.h>
int gcd(int a,int b);
int main()
{
int a,b,g;
printf("Enter first number\n");
scanf("%d",&a);
printf("Enter second number\n");
scanf("%d",&b);
g =gcd(a,b);
printf("The gcd of %d and %d = %d\n",a,b,g);
getchar();
return 0;
}
int gcd(int a,int b)
{
if(a==0)
return b;
else
return gcd(b%a,a);
}