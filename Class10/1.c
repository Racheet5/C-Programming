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
printf("The elements of array are:");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  if(j>2){printf("\n");}
  printf("%d\t",a[i][j]);
  
 } 
}
return 0;

}
