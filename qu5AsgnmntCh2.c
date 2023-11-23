#include<stdio.h>
int main(){
	int marks;
	printf("enter the marks out of 100 : ");
	scanf("%d",&marks);
	if(marks>=90 && marks<=100){
		printf("A+");
	}else if(marks>=80 && marks<=89){
		printf("A");
	}else if(marks>=70 && marks<=79){
		printf("B+");
	}else if(marks>=60 && marks<=69){
		printf("B");
	}else if(marks>=50 && marks<=59){
		printf("C+");
	}else if(marks>=40 && marks<=49){
		printf("C");
	}else{
		printf("not qualified");
	}
	             
	
	return 0;
}
		                  
				    