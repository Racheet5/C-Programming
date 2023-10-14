# include<stdio.h>
int main()
{
int n,s;
printf("Enter a Number:");
scanf("%d",&n);
if (n%10==5)
 {
  s=n*n;
  printf("The square of number is %d",s);
 }
else printf("\nDoes not meet the requirements for processing");
return 0;
}
