# include<stdio.h>
int main()
{
 int s,bas,HR,DA,con,bon,inc,sal;
printf("Enter the sales");
scanf("%d",&s);
bas=3000;
HR=((20*bas)/100);
DA=((110*bas)/100);
con=500;
 if (s>=100000)
 {
  bon=500;
  inc=((10*s)/100);
  sal=s+bas+HR+DA+con+bon+inc;
 }
 else if(s<100000)
 {
  bon=200;
  inc=((5*s)/100);
  sal=s+bas+HR+DA+con+bon+inc;
 }
printf("\nThe Total Sales is %d",sal);
return 0;
}
