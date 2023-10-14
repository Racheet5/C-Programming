# include<stdio.h>                                   //Program for factorial.
int fact(int a)   
{
int f=1,i;
for(i=1;i<=a;i++)
 {
  f=f*i;
 }
 return f;
}
int main()
{
int n,f;
printf("Enter a number");
scanf("%d",&n);
f=fact(n);
printf("The factorial is %d",f);
return 0;
}
