# include<stdio.h>
int main()
{
int l;
printf("Enter an Year");
scanf("%d",&l);
if (l%4==0)
 {
  if (l%100==0)
  {
   if (l%400==0)
    printf("It is a Leap Year");
   else 
   printf("It is not a Leap Year");
  }
  else 
  printf("It is a Leap Year");
 }
else 
printf("It is not a Leap Year");
}
