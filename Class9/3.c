# include<stdio.h>
int main()
{int large,small,a[50],n,i;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{small=a[0];
if (a[i]<small)
small=a[i];
}
for(i=0;i<n;i++)
{large=a[0];
if (a[i]>large)
large=a[i];
}
printf("The largest is %d",large);
printf("\nThe smallest is %d",small);
return 0;
}
