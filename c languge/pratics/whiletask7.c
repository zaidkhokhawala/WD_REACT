#include <stdio.h>

main(){
	
	
	
	int num;
	int i=1;
	printf("enter number");
	scanf("%d",&num);
	
	while(i<=10){
		printf("%d x %d = %d \n",num,i,num*i);
		i++;
	}
}
