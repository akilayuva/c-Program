#include<stdio.h>
#include<conio.h>
void main()
{
int a,res,sum=0;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
b=a;
while(b!=0)
{
res=b%10;
sum=sum+(res*res*res);
b=b/10;
}
if(a==sum)
{
printf("%d is armstrong number",a);
}
else
{
printf("%d is not armstrong number",a);
}
getch();
}
