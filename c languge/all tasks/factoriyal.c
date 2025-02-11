#include <stdio.h>
main(){
	
	
	int num,product=1,i;
	printf("enter number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		product*=i;
	}
	printf("%d factoriyal is %d",num,product);
	
}
