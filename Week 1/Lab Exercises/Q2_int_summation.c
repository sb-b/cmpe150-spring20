#include <stdio.h>

int main(){

	int no1, no2, sum;
	printf("Enter the numbers: ");

	scanf("%d%d",&no1,&no2);
	sum = no1 + no2;
	printf("The sum of %d and %d is %d",no1, no2, sum);

	return 0;
}
