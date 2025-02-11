#include<stdio.h>
 main(){
int i,n;
for (i=1;i<=2;i++)
{
  printf("enter number : ");
  scanf("%d",&n);
  if(n%2==0){
    printf("%d number is even\n",n);
  }
  else{
     printf("%d number is odd\n",n);
  }
  
}

   
}
