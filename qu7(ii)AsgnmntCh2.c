//series is 11+21+31+41.....................n
#include<stdio.h>
int main(){
	int n;
	printf("enter the last number n of k*10+1 form : ");
	scanf("%d",&n);
	int num, sum=0;
	
	if((n-1)%10==0){
		for(int i = 11; i<=n ; i=i+10){
			num = i;
			sum+=num;
		}
	}else{
		printf("entered number is not of k*10+1 type showing result for previous happened case: ");
		for(int i = 11; i<=n ; i=i+10){
			num = i;
			sum+=num;
		}
		
	}
	
	printf("the sum of series is : %d ",sum);
	return 0;
}