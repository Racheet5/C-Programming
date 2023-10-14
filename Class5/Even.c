# include<stdio.h>
int main()
{
 int u,l,i;
printf("Enter the lower & upper limits of a range:");
scanf("%d%d",&l,&u);
i=l;
while(i<=u)
 {
  if (i%2==0)
  {printf("\n%d is even",i);}
  i++;
 }
i=l;
while(i<=u)
 {
  if (i%2!=0)
  {printf("\n%d is odd",i);}
  i++;
 }
return 0;
}
