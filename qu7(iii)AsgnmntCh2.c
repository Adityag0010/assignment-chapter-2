//series is 101+201+301...................n n is only of 3 digits 
#include<stdio.h>
int main(){
	int n;
	printf("enter the last number n of type k*100+1 not more than 999: ");
	scanf("%d",&n);
	int num, sum=0;
	if(n<1000){
	
	if((n-1)%100==0){
		for(int i = 101; i<=n ; i=i+100){
			num = i;
			sum+=num;
		}
	}else{
		printf("entered number is not of k*100+1 type showing result till previous happened case: ");
		for(int i = 101; i<=n ; i=i+100){
			num = i;
			sum+=num;
		}
		
	}
}else{
	printf("n is larger than 999");
}
	
	printf("the sum of series is : %d ",sum);
	return 0;
}