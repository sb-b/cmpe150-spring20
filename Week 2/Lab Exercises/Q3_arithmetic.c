#include <stdio.h>

int main(void) {
	int no1, no2, sum;
	printf("Enter the numbers: \n");
	scanf("%d%d",&no1,&no2);
	sum = no1 + no2;

	printf("Sum is: %d \n", sum);
	printf("Subtraction is: %d \n", no1 - no2);
	printf("Multiplication is: %d \n", no1 * no2);
	printf("Division is: %d \n", no1 / no2);
	printf("Mod is: %d \n", no1 % no2);

	return 0;
}
