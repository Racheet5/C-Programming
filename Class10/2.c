# include<stdio.h>
int main()
{
int a[3][3],i,j,s=0;
printf("Enter the array elements:");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  scanf("%d",&a[i][j]);
 } 
}
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  if(i==j)
  {printf("The elements of lead diagonal are:%d\n",a[i][j]);
   s=s+a[i][j];
  }
 } 
}
printf("The sum of elements in the array is %d",s);
return 0;
}
