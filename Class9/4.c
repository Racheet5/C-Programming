# include<stdio.h>
int main()
{int s=0,n,a[50];
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the elements");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
s+=a[i];
}
printf("The sum is %d",s);
return 0;
}
