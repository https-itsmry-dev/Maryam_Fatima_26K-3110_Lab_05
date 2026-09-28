#include <stdio.h>
int main()
{
	int restaurantOpen, itemAvailable, balanceSufficient;
	printf("This is a program written in C to practise nested if-else conditions");
	printf("\nEnter 1 for Yes or 0 for No to confirm whether the restaurant is open ");
	scanf("%d", &restaurantOpen);
	printf("\nThe number entered by the user for the restaurant open is: %d", restaurantOpen);
	printf("\nEnter 1 for Yes or 0 for No to confirm whether the item is available ");
	scanf("%d", &itemAvailable);
	printf("\nThe number entered by the user for the item availability is: %d", itemAvailable);
	printf("\nEnter 1 for Yes or 0 for No to confirm whether the balance is sufficient ");
	scanf("%d", &balanceSufficient);
	printf("\nThe number entered by the user for the balance sufficient is: %d", balanceSufficient);

	printf("\n\nChecking whether the restaurant is open or not");
	if (restaurantOpen == 1)
	{
		printf("\nThe restaurant is open");
		printf("\nChecking whether the item is available or not");
		if (itemAvailable == 1)
		{
			printf("\nThe item is available");
			printf("\nChecking whether the balance is sufficient or not");
			if (balanceSufficient == 1)
			{
				printf("\nThe balance is sufficient");
				printf("\n\nOrder Status: Your order has been placed successfully");
			}
			else
			{
				printf("\nThe balance is not sufficient");
				printf("\n\nOrder Status: Order failed, please add balance");
			}
		}
		else
		{
			printf("\nThe item is not available");
			printf("\n\nOrder Status: Order failed, the item is unavailable");
		}
	}
	else
	{
		printf("\nThe restaurant is closed");
		printf("\n\nOrder Status: Order failed, the restaurant is closed");
	}

	return 0;
}


