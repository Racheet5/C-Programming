# include<stdio.h>
int main()
{
int a[50],n;
printf("Enter the size of  array");
scanf("%d",&n);
printf("Enter the elements");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=(n-1);i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}
