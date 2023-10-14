# include<stdio.h>
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
   if((i==j)||(i+j==n-1))
   {
    printf("%d",a[i][j]);
   }
   else printf(" ");
  }printf("\n");
 }
return 0;
}
