# include<stdio.h>
int main()
{
int a[3][3],i,j;
printf("Enter the array elements:");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  scanf("%d",&a[i][j]);
 } 
}

printf("The transpose is \n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  printf("%d",a[j][i]);
 } 
}
return 0;
}
