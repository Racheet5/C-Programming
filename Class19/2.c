# include<stdio.h>
struct vector
{
int i,j,k;
}c1,c2,t3;
struct complex add(struct vector c11,struct vector c22)
{
struct complex c3;
c3.i=c11.i + c22.i;
c3.j=c11.j + c22.j;
c3.k=c11.k + c22.k;
return c3;
}
int main()
{
printf("Enter vector 1:");
scanf("%d%d%d",&c1.i,&c1.j,&c1.k);
printf("Enter vector 2:");
scanf("%d%d%d",&c2.i,&c2.j,&c2.k);
t3=add(c1,c2);
printf("The vector is %di + %dj %dk",t3.i,t3.j,t3.k);
return 0;
}
