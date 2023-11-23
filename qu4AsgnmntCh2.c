/* army criteria taken 
 age 21 to 27 ,
 height more than 157.5 for non hilly candidate otherwise can be 152.5 and above for hilly region person , 
 minimum 60% marks in test conducted by them */
 
 
#include<stdio.h>
int main(){
	char YesNo;
	printf("enter capital 'Y' if canditate is from hilly region like Gorkhas, Nepalese, Assamese and Garhwalis otherwise type any one alphabet: ");
	scanf("%c",&YesNo);
	
	int age , marks;
	printf("enter age: ");
	scanf("%d",&age);
	printf("\nenter marks percentage value: ");
	scanf("%d",&marks); 
	float ht;  //ht for height 
	printf("\nenter height in cm: ");
	scanf("%f",&ht);
	
	if(YesNo=='Y'){
		if((age>=21 &&age<=27)&&(ht>152.5) &&(marks>=60)){
			printf("\nCongrats you are eligible for next round of selection process");
		}else{
			printf("\nnot eligible");
		}
	}else{
		if((age>=21 &&age<=27)&&(ht>157.5) &&(marks>=60)){
			printf("\nCongrats you are eligible for next round of selection process");
		}else{
			printf("\nnot eligible");
		}
	}
	
	return 0;
}