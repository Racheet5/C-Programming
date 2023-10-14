# include<stdio.h>     //Check for Armstrong Number
# include<math.h>
int arm(int l,int u)
{int o;

for(int i=l;i<=u;i++)
 {int s=0,c
 /=0,l1=l;
  while(l1)
  {
  c++;
  l1=l1/10;
  }
  while(l)
  {
   o=l%10;
   l=l/10;
   s=s+pow(o,c);
  }
  if (s==i){printf("%d is armstrong",s);}
 }

return 0;
}


int main()
{
int l,u,n;
printf("Enter l");
scanf("%d",&l);
printf("Enter u");
scanf("%d",&u);

arm(l,u);
return 0;
}
