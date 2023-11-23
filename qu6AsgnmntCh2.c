#include<stdio.h>
int main(){
	int booking_price ;
	char card;
	printf("enter card code: " );
	scanf("%c",&card);
	printf("enter booking price: ");
	scanf("%d",&booking_price);
	
	
	if((booking_price==20000)&&(card=='A')){
		printf("VVIP treatment");
	}else if((booking_price==10000)&&(card=='B')){
		printf("VIP treatment");
	}else if((booking_price==5000)&&(card=='C')){
		printf("SPECIAL COUNTY treatment");
	}else if((booking_price==2000)&&(card=='D')){
		printf("GENERAL COUNTY treatment");
	}else{
		printf("sorry you are not allowed");
	}
	
	
	
	
	return 0;
}