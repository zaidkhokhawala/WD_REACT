#include <stdio.h>

 main() {
  int a[4],b[4],sum[4],i;
  
  for(i=0;i<4;i++){
        printf("Enter 4 numbers for the first array: ");
        scanf("%d", &a[i]);
  }
  for(i=0;i<4;i++){
  	printf("Enter 4 numbers for the second array: ");
        scanf("%d", &b[i]);
  }
  for(i=0;i<4;i++){
  	sum[i]=a[i]+b[i];
  }
   for(i=0;i<4;i++){
  	printf(" sum of array is %d\n",sum[i]);
  }
   
}

