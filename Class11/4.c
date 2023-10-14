# include<stdio.h>                  //Array Elements Reverse
int main()
{
int a[3][3],i,j,n,temp;
printf("Enter array elements:");
for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
printf("Enter a choice:");
scanf("%d",&n);
switch (n)
{
case 1:  temp=a[i][j];
         a[i][j]=a[i][j+2];
         a[i][j+2]=temp;

case 2:  temp=a[i][j];
         a[i][j]=a[i+2][j];
         a[i+2][j]=temp;
}
return 0;
}
