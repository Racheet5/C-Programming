# include<stdio.h>
int avg(int b[],int n)
{
int sum=0,avg;
for (int i=0;i<n;i++)
{sum+=b[i];}
avg=(sum/n);
printf("The average is %d",avg);
return 0;
}
int main()
{int a[10],n;
printf("Enter the limit(<10):");
scanf("%d",&n);
printf("Enter the elements:");
for (int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
avg(a,n);
return 0;
}
