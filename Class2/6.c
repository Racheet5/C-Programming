//Paise to equivalent Rupees & Paisa.
# include<stdio.h>
int main()
{int p,r,c;
printf("Enter the value");
scanf("%d",&c);
p=(c%100);
r=(c/100);
printf("The value %d is %d Rupees and %d paise",c,r,p);
return 0;
}
