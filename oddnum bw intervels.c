#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the intervels");
scanf("%d %d",&a,&b);
while(a<b)
{
a++;
if(a%2!=0)
{
printf("%d",a);
}
getch();
}
