# include<stdio.h>
int main()
{
 for(int i=0;i<4;i++)
 {int c='A';
  for(int j=0;j<=i;j++)
  {
   printf("%c",c);
   c++;
  }
printf("\n");
 }
return 0;
}
