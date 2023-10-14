# include<stdio.h>
# include<math.h>
int main()
{
int a,b,c,x1,x2,D;
printf("Enter the coefficients a,b,c of equation ax^2 + bx + c:");
scanf("%d%d%d",&a,&b,&c);
D=((b*b)-(4*a*c));
if (D==0)
 {
  x1=-b/(2*a);
  x2=-b/(2*a);
  printf("\nThe roots are %d & %d",x1,x2);
 }
else if (D>0)
 {
  x1=((-b + sqrt(D))/2*a);
  x2=((-b - sqrt(D))/2*a);
  printf("\nThe roots are %d & %d",x1,x2);
 }
else 
printf("\nThe roots do not exist");
return 0;
}
