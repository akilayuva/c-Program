#include<stdio.h>
#include<conio.h>
void main()
{
int a,c,i;
clrscr();
printf("Which multipilcation table u want:");
scanf("%d",&a);
for(i=1;i<17;i++)
{
 c=i*a;
 printf("\n%d * %d = %d",i,a,c);
}
getch();
}
