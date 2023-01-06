#include<stdio.h>
int main(){
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	for(int i = 0 ;i < num ;i++){
		for(int j = 0 ; j < num;j++){
			if(i==0||i==num-1){
				printf(" * ");
			}
			else if(j==0||j==num){
				printf(" * ");
			}
		}
		printf("\n");
	}
}