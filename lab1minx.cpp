#include<stdio.h>
int main() {
	int n1;
	int n2;
	
	printf("Input Number 1\n");
	scanf("%d/n",&num1);
	
	printf("Input Number 2\n:");
	scanf("%d/n",&num2);
	
	printf("Input");
	scanf("%d %d",&num1,&num2);
	
	if(num > num2){
		int total = num1 - num2;
		printf("num1 > num2 = %d",total);
	}else{
		int total = num2 - num1;
		printf("num1 < num2 = %d",total);
	}
}
