#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,flag;
clrscr();
printf("Enter the intervels:");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
 flag=0;
 for(j=2;j<=b/2;j++)
 {
   if(i%j==0)
   {
   flag=1;
   break;
   }
  }
   if(flag==0)
   {
   printf("%d",a);
   }
 }
getch();
}
