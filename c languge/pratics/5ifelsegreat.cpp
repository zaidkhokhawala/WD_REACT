#include <stdio.h>

main(){

int a,b,c;
printf("enter first number :\n ");
scanf("%d",&a);
printf("enter second number :\n ");
scanf("%d",&b);
printf("enter third number :\n ");
scanf("%d",&c);

if(a>b && a>c){
	printf("first is great");
}
else if(b>a && b>c){
	printf("second is great");
}
else{printf("third is great");
}
}
