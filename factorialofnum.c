#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,res=1;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
for(i=a;i>0;i--)
{
 res=res*i;
 }
 printf("The factorial of the %d is %d",a,res);
 getch();
 }
