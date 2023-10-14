# include <stdio.h>
int main()
{int a,b,c,d;
printf("Enter 3 numbers to be compared\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
d=a;
if (a>c)
d=a;
if (b>c)
d=b;
if (b>a)
d=b;
if (c>a)
d=c;
if (c>b)
d=c;
printf("The greatest number is %d",d);
return 0;
}
