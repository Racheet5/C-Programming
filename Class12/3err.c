# include<stdio.h>
int main()
{
char a[50],b[50];int i,p,l;
printf("Enter the main string:");
scanf("%[^\n]s",a);
printf("Enter the position and length of substring: ");
scanf("%d %d",&p,&l);
for(i=p;i<=l;i++)
 {
  printf("%c",a[i]);
 }
return 0;
}
