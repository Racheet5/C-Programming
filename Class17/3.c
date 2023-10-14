# include<stdio.h>
int main()
{
struct empdata
{
char name[50];
char gender;
char designation[50];
char department[50];
float basicpay;
}emp[5] ;
float basicpay,grosspay,HRA,DA; 
int n;
printf("Enter the number of employees:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("Enter Name:");
scanf("%s",emp[i].name);
printf("Enter Gender:");
scanf(" %c",&emp[i].gender);
printf("Enter Designation:");
scanf("%s",emp[i].designation);
printf("Enter Department:");
scanf("%s",emp[i].department);
printf("Enter Basic pay:");
scanf("%f",&emp[i].basicpay);
HRA=0.25*emp[i].basicpay;
DA=0.75*emp[i].basicpay;
grosspay=emp[i].basicpay+HRA+DA;
}

for(int i=0;i<n;i++)
{
printf("Name:%s",emp[i].name);
printf("\nGender:%c",emp[i].gender);
printf("\nDesignation:%s",emp[i].designation);
printf("\nDepartment:%s",emp[i].department);
printf("\nBasic pay:%f",emp[i].basicpay);
printf("\nHRA:%f\nDA:%f\nGross Pay:%f\n",HRA,DA,grosspay);
}
return 0;
}
