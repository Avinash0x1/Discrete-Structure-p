//C program to print truth table of OR Operation
#include<stdio.h>
int OR(int a,int b);
int main()
{
int a,b;
printf("A\tB\ta V B\n\n");
for(a=0;a<=1;a++)
{
for(b=0;b<=1;b++)
{
printf("%d\t%d\t%d\n\n",a,b,OR(a,b));
}
}
return 0;
}

int OR(int a,int b)
{
if(a==1||b==1)
return 1;
else
return 0;
}