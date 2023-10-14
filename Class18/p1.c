#include<stdio.h>
struct student
{
        int roll;
        char name[30];
        int marks;
        int dd;        int mm;        int yy;
};
void main()
{
        struct student s[5];
        for(int i=0;i<5;i++)
        {
                printf("Roll=\n");
                scanf("%d",&s[i].roll);
                printf("Name=\n");
                scanf("%s",s[i].name);
                printf("Marks=\n");
                scanf("%d",&s[i].marks);
                printf("DD=\n");
                scanf("%d",&s[i].dd);
                printf("MM=\n");
                scanf("%d",&s[i].mm);
                printf("YY=\n");
                scanf("%d",&s[i].yy);                
        }
        printf("Roll\t Name\t Marks\t DOB\n");
        for(int j=0;j<5;j++)
        {
                 printf("%d\t %s\t %d\t %d-%d-%d\n",s[j].roll,s[j].name,s[j].marks,s[j].dd,s[j].mm,s[j].yy);
        }
}            
                                
                        
