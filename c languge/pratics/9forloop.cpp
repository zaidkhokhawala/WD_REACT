
//for loop
#include<stdio.h>
main()
{
int n;
int fac= 1;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
	
    fac*=i;
}
printf("%d is number fac is : %d",n,fac);
}
