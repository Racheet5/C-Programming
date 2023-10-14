# include<stdio.h>       //Replace array elements:even with 1,odd with 0.
int main()    
{
int a[3][3],i,j,n;
printf("Enter the size:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[i][j]%2==0)
   {
    a[i][j]=1;
   }
   else a[i][j]=0; 
  }
 }
for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d",a[i][j]);
  }printf("\n");
 }

return 0;
}
