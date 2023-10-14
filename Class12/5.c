# include<stdio.h>
int main()
{char a[50],c,m,i;
printf("Enter a string:");
scanf("%[^\n]s",a);
printf("Enter the character to be replaced");
scanf(" %c",&c);
printf("Enter the new char:");
scanf(" %c",&m);
for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==c)
  m=c;
 }
for(i=0;a[i]!='\0';i++)
 {
  printf("%c",a[i]);
 }

return 0;

}
