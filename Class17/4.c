# include<stdio.h>
int main()
{
struct dist
{
int kilometer,meter;
}d1,d2,d3;
int n;
printf("Enter km1:");
scanf("%d",&d1.kilometer);
printf("Enter m1:");
scanf("%d",&d1.meter);
printf("Enter km2:");
scanf("%d",&d2.kilometer);
printf("Enter m1:");
scanf("%d",&d2.meter);
d3.meter=(d1.meter+d2.meter)%1000;
d3.kilometer=d1.kilometer+d2.kilometer+((d1.meter+d2.meter)/1000);
printf("\nDistance is %d km & %d m",d3.kilometer,d3.meter);

return 0;
}
