#include<stdio.h>
#include<math.h>
int main(){
	int num,sum=0,i,a[1000],n,j;
	printf("Enter Number : ");
	scanf("%d",&num);
	for(  i = 0 ; num > 0;i++){
		n=num%10;
	 	a[i]=n*pow(2,i);
	 	num=num/10;
	}
	for( j = 0 ; j>i ;j++){
		sum=sum+a[j];
	}
	printf("%d",sum);
}
