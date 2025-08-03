//C program to print truth table of NOT Operation
#include<stdio.h>
int NOT(int a);
int main()
{
int a,b;
printf("A\t~A\n");
for(a=0;a<=1;a++)
{
printf("%d\t%d\n",a,NOT(a));
}
return 0;
}
int NOT(int a)
{
if(a==1)
return 0;
else
return 1;
}