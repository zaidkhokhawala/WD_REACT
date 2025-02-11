#include <stdio.h>
main(){
	int i,j,z;
	for(i=1;i<=5;i++){
		
	   for(z=1;z<i;z++){
			printf(" ");
		}
		
		for(j=1;j<=i;j++){
			printf(" %d",  i );
		}
		
		
		printf("\n");
	}

}
