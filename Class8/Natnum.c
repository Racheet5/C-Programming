# include<stdio.h>
int main()
{
int c,S1,S2,n,i,j;
printf("Enter a choice:");
scanf("%d",&c);
switch(c)
{case 1:{
            i=1;
            printf("Enter the limit");
            scanf("%d",&n);
            S1:
            {printf("%d",i);i++;if (i>n){break;}     
            }goto S1;
            
            }
case 2: {
            printf("Enter the limit");
            scanf("%d",&n);
            j=n;
            S2:
            {printf("%d",j);j--;if(j<1){break;}    
            }goto S2;
            
            } 
}
return 0;
}
