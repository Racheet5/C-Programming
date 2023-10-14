# include<stdio.h>                           //x to the power y using function. 
int calc(int x,int y)
{int p=x;
for (int i=1;i<=y;i++)
 {
  p=x*x;
 } 
return x;
}
int main()
{
int n,r,p;
printf("Enter the n & r");
scanf("%d%d",&n,&r);
p=calc(n,r);
printf("Product is %d",p);
return 0;
}
