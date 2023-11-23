#include<stdio.h>
int main(){
	float score , ball_taken;
	printf("Score by batsman: ");
	scanf("%f",&score);
	printf("ball taken by batsman: ");
	scanf("%f",&ball_taken);
	printf("strike rate of batsman is : %d", score*100/ball_taken);
	
	
	float overs , run_given;
	printf("\nno of over bolwed by bowler: ");
	scanf("%f",&overs);
	printf("total run given by bowler in those overs: ");
	scanf("%f",&run_given);
	printf("bowling economy of that bowler is : %f ",run_given/overs);
	
	
	
	return 0;
	
}