// series 2+4+6+8+......+n  n is last number of that series must be an even number and wants sum of the series as output
#include<stdio.h>
int main(){
	int n;
	printf("enter the last number of series n which is even: ");
	scanf("%d",&n);
	int num, sum=0;
	
	if(n%2==0){
		for(int i = 2; i<=n ; i=i+2){
			num = i;
			sum+=num;
		}
	}else{
		printf("you entered odd n which is not part of series , showing result till n-1: ");
		for(int i = 2; i<=n ; i=i+2){
			num = i;
			sum+=num;
		}
		
	}
	
	printf("the sum of series is :%d ",sum);
	return 0;
}
	