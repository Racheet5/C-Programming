# include<stdio.h>
int main()
{
int a[50],n,i;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if (a[i]%2==0)printf("%d is Even\n",a[i]);
}
return 0;
}
