#include <stdio.h>
main(){
	int a;
	printf("enter your age\n");
	scanf("%d",&a);
if(a>=100)
{printf("%d is your age and you are not eligible for elder",a);}
else if(a>=18)
{printf("%d is your age and you are eligible",a);}
else
{printf("%d is your age and you are not eligible for child",a);}
	}
