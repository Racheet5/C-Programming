# include<stdio.h>
int acircle()
{float r,a,p;
printf("Enter the radius of circle");
scanf("%f",&r);
p=(22.0/7);
a=p*r*r;
printf("\n The area of the circle is %f",a);
return 0;
}
int atriangle()
{float b,h,a;//,c;
//c=(1.0/2);
printf("Enter the Base & Height of triangle");
scanf("%f%f",&b,&h);
a=.5*b*h;
printf("The area of the triangle is %f",a);
return 0;
}
int asquare()
{int a,s;
printf("Enter the side of square:");
scanf("%d",&s);
a=s*s;
printf("Area is %d",a);
}
int arect()
{int l,b,a;
printf("Enter the length & breadth of rectangle:");
scanf("%d%d",&l,&b);
a=l*b;
printf("Area is %d",a);
}
int main()
{
int m;
printf("Enter a choice");
scanf("%d",&m);
switch(m)
{
case 1:atriangle();break;
case 2:acircle();break;
case 3:asquare();break;
case 4:arect();break;

}
return 0;
}

