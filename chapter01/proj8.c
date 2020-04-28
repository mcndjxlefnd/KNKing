#include <stdio.h>

int main(void)
{
	float amount, amount1, amount2, interest, monthly;

	printf("Enter amount of loan: $");
	scanf("%f", &amount);
	printf("Enter interest rate (%): ");
	scanf("%f", &interest);
	printf("Enter monthly payment: $");
	scanf("%f", &monthly);

	printf("Balance remaining after first payment: $%.2f\n", amount1=(amount*(1.0f+interest/1200.0f)-monthly));
	printf("Balance remaining after second payment: $%.2f\n", amount2=amount1*(1.0f+interest/1200.0f)-monthly);
	printf("Balance remaining after third payment: $%.2f\n", amount2*(1.0f+interest/1200.0f)-monthly);

	return 0;
}
