# include<stdio.h>
int main()
{
int a[2][2],b[2][2],c[2][2],i,j,m,n;
printf("Enter the elements of arr1:");
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 {
  scanf("%d",&a[i][j]);
 } 
}
printf("Enter the elements of arr2:");
for(i=0;i<2;m++)
{
 for(j=0;j<2;n++)
 {
  scanf("%d",&b[m][n]);
 } 
}
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 {
  c[i][j]=a[i][j]*b[m][n]+a[i][j+1]*b[m+1][n];
  

j++;
  
 } 
}
printf("The sum of 2 arrays is ");
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 {
  printf("%d\t",c[i][j]);
 } 
}
return 0;
}
