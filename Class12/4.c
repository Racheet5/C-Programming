# include<stdio.h>
int main()
{
char a[50],b[50],c[50],i,m=0,n=0,l;
printf("Enter string1")
scanf("%[^\n]s",a);
printf("Enter string2")
scanf(" %[^\n]s",b);
for(i=0;a[i]!='\0';i++)
 {
  m=m+1;
 }
for(i=0;b[i]!='\0';i++)
 {
  n=n+1;
 }
l=m+n;
for(i=0;i<=l;i++)
 {
  printf("%d");
 }
return 0; 
}
