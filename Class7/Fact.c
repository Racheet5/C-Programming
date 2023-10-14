# include<stdio.h>
int main()
{
int n,m,s=0,h=1;
printf("Enter a number:");
scanf("%d",&n);
for(m=1;m<=n;m++)
  {h=h*m;
   s=s+h;
  }
printf("The Sum of factorials is %d",s);
return 0;
}
