#include <stdio.h>
main(){
	
    int a[100],i,size,sum=0;
	printf("enter size of array");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		
		scanf("%d",&a[i]);
	sum+=a[i];	}	
			int max=a[0];
	for(i=0;i<size;i++){
	     if(a[i]<max){
	     	max=a[i];
	     	
		 }	
	}
	
	printf("%d is max",max);
		printf("%d is sum",sum);
}
