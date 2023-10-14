# include<stdio.h>                         //Program for factorial.
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
int n,n1,f,r,r1,c,c1,fac;
printf("Enter n");
scanf("%d",&n);
printf("Enter r");
scanf("%d",&r);
c=n-r;
n1=fact(n);
r1=fact(r);
c1=fact(c);
fac=(n1/(r1*c1));
printf("The combination is %d",fac);
return 0;
}
