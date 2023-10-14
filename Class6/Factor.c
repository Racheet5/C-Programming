#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{if (n/i==2){printf("It is a prime No.");}
else printf("It has factors");break;
}
return 0;
}
