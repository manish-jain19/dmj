# include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter two no.:\n");
scanf("%d%d",&a,&b);
c=a+b;
d=a-b;
printf("the add of  two nos are: %d ",c);
printf("the sub of  two nos are: %d ",d);
mul(a,b);
}
int mul(int a,int b)
{
int e;
e=a*b;
printf("the mul of  two nos are: %d ",e);
return e;
}
