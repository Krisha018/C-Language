#include<stdio.h>
int main(){
	int num,n,a[100],i,j;
	printf("Enter Number : ");
	scanf("%d",&num);
	for( i = 0 ; num > 0;i++ ){
		n=num%2;
		a[i]=n;
		num=num/2;
	}

	for( j = i-1; j>=0;j--){
		printf("%d",a[j]);
	}
}