# include<stdio.h>                 //Evaluate Series
int fact(int a)   
{
int f=1,i;
for(i=1;i<=a;i++)
 {
  f=f*i;
 }
 return f;
}
int ser(int x)
{int s=0;
for(i=1;i<x;i++)
 {
  s=s+pow(-1,i);
  
  
 }
}

int main()
{int x,m;
printf("Enter the limit:");
scanf("%d",&x);
m=ser(x);
return 0;
}
