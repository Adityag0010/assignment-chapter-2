#include<stdio.h>
int main(){
	int year;
	printf("enter the year: ");
	scanf("%d",&year);
	if((year%100!=0)&&(year%4==0)){
		printf("\n%d is a leap year",year);
	}else if(year%400==0){
		printf("\n%d is a leap year",year);
	}else{
		printf("\n%d not a leap year",year);
	}
	return 0;
}