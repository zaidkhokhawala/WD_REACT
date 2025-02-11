#include <stdio.h>

main(){
int a=1;
int b;
int sum=0;
printf("enter number : ");
scanf("%d",&b);


while(a<=b){
sum+=a;
	a++;
}
printf("sum of %d",sum);
}
