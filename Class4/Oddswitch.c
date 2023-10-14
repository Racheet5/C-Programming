#include<stdio.h>
int main()
{
 int m,n;
printf("Enter a Number:");
scanf("%d",&m);
n=m%2;
switch (n)
 {
  case 0:printf("\nThe number is even");break;
  case 1:printf("\nThe number is Odd");break;
 }
return 0;
}
