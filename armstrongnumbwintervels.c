#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,res,sum=0;
clrscr();
printf("Enter the intervels");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
  j=i;
  while(j!=0)
  {
  res=j%10;
  sum=sum+(res*res*res);
  j=j/10;
  }
  if(sum==i)
  {
  printf("\nArmstrong number is %d",i);
  }
  sum=0;
  res=0;
 }
 getch();
 }
