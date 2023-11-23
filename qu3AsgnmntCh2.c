#include<stdio.h>
int main(){
	int num;
	printf("enter num value: ");
	scanf("%d",&num);
	if((num%3==0)&&(num%5==0)){
		printf("\n%d is divisible by both 3 and 5",num);
	}else{
	printf("\n%d is NOT divisible by 3 and 5 both simulteneously",num);
		
	}
	return 0;
}