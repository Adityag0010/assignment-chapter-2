#include<stdio.h>
int main(){
	int x,y;
	printf("enter value of y: ");
	scanf("%d",&y);
	if(y>0){
		x=1;
		printf("y is greater than one and now x is assign to value %d",x);
	}else{
		printf("y is smaller than zero x is not assigned to value 1 ");
	}
	return 0;
	
}