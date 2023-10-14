# include<stdio.h>
int main()
{int n;
 int i=f=1;
 printf("Enter a number:");
 scanf("%d",&n);
 while (i<=n)
 {
  f=f*n;
 }
printf("The Factorial is %d",f);
return 0;
}
