# include<stdio.h>
int main()
{
char a[50],i,c=0;
printf("Enter the string:");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
 {
  c=c+1;
 }
printf("The reverse is");
for(i=c;i>=0;i--)
 {
  printf("%c",a[i]);
 }

return 0;
}
