//C program to print truth table of AND Operation
#include<stdio.h>
int AND(int a,int b);
int main()
{
int a,b;
printf("A\tB\ta^B\n");
for(a=0;a<=1;a++)
{
for(b=0;b<=1;b++)
{
printf("%d\t%d\t%d\n",a,b,AND(a,b));
}
}
return 0;
}

int AND(int a,int b)
{
if(a==1&&b==1)
return 1;
else
return 0;
}