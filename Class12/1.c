#include<stdio.h>
int main()
{
char a[50],b[50],i,f=0;
printf("Enter string1:");
scanf("%[^\n]s",a);
printf("Enter string2:");
scanf(" %[^\n]s",b);
for (i=0;a[i]!='\0';i++)
 {
  if(a[i]==b[i])
  {
   f=1;
  }
  else break;
 }
if (f==1)
 {
  printf("Strings are equal.");
 }
else printf("strings are unequal.");
return 0;
}
