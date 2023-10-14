# include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 numbers to be compared:");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{if (a>c)
 {if (b>c)printf("%d is 2nd largest number",b);
  else printf("%d is 2nd largest number",c);
 }
}
else if (b>c)
{if(b>a)
 {if(a>c)printf("%d is 2nd largest number",a);
  else printf("%d is 2nd largest number",c);
 }
}
else if (c>a)
{if (c>b)
 {if (a>b)printf("%d is 2nd largest number",a);
  else printf("%d is 2nd largest number",b);
 }
}
return 0;
}
