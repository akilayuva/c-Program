#include<stdio.h>
#include<conio.h>
int main()
{
int a,i;
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
  if(a%i==0)
  {
  printf("Not a prime");
  break;
  }
  else
  {
  printf("It is a prime number");
  }
}
return 0;
}
