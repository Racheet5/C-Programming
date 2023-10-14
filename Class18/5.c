# include<stdio.h>
void search(int a[],int n,int l)
{int c=0,i,p;
for ( i=0;i<l;i++)
{
if (n==a[i]){c+=1;p=i;}
}
if(c>0){printf("Element is found at position %d",p+1);}
else printf("Element not found");
}
int main()
{
int a[50],l,n;
printf("Enter the limit:");
scanf("%d",&l);
printf("Enter the elements:");
for(int i=0;i<l;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to be searched for");
scanf("%d",&n);
search(a,n,l);
return 0;
}
