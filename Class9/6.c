# include<stdio.h>
int main()
{
int a[10],n,i,temp;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i+=2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
