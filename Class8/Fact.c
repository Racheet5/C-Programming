# include<stdio.h>
int main()
{
int n,S1;
int i=1;int f=1;
printf("Enter the number: ");
scanf("%d",&n);
 S1:
{
  f=f*n;i++;if (i>=n){goto print;}
 }
 goto S1;
print:printf("Factorial:%d",f);
return 0;
}
