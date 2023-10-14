# include<stdio.h>
struct complex
{
int real,imag;
}c1,c2,t3;
struct complex add(struct complex c11,struct complex c22)
{
struct complex c3;
c3.real=c1.real + c2.real;
c3.imag=c1.imag + c2.imag;
return c3;
}
int main()
{
printf("Enter complex 1:");
scanf("%d%d",&c1.real,&c1.imag);
printf("Enter complex 2:");
scanf("%d%d",&c2.real,&c2.imag);
t3=add(c1,c2);
printf("The Complex number is %d + %di",t3.real,t3.imag);
return 0;
}
