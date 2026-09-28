#include <stdio.h>
int main()
{
	int operation, accountType;
	printf("This is a program written in C to practise nested switch statements");
	printf("\n\nATM Menu");
	printf("\n1. Balance Inquiry");
	printf("\n2. Cash Withdrawal");
	printf("\n3. Cash Deposit");
	printf("\n4. PIN Change");
	printf("\nEnter your choice: ");
	scanf("%d", &operation);
	printf("\nThe number entered by the user for the operation is: %d", operation);

	switch (operation)
	{
		case 1:
			printf("\n\nYou selected Balance Inquiry");
			printf("\n1. Savings Account");
			printf("\n2. Current Account");
			printf("\nEnter your choice: ");
			scanf("%d", &accountType);
			switch (accountType)
			{
				case 1:
					printf("\nOperation: Balance Inquiry");
					printf("\nAccount Type: Savings Account");
					break;
				case 2:
					printf("\nOperation: Balance Inquiry");
					printf("\nAccount Type: Current Account");
					break;
				default:
					printf("\nInvalid Account Type Entered");
			}
			break;

		case 2:
			printf("\n\nYou selected Cash Withdrawal");
			printf("\n1. Savings Account");
			printf("\n2. Current Account");
			printf("\nEnter your choice: ");
			scanf("%d", &accountType);
			switch (accountType)
			{
				case 1:
					printf("\nOperation: Cash Withdrawal");
					printf("\nAccount Type: Savings Account");
					break;
				case 2:
					printf("\nOperation: Cash Withdrawal");
					printf("\nAccount Type: Current Account");
					break;
				default:
					printf("\nInvalid Account Type Entered");
			}
			break;

		case 3:
			printf("\n\nYou selected Cash Deposit");
			printf("\n1. Savings Account");
			printf("\n2. Current Account");
			printf("\nEnter your choice: ");
			scanf("%d", &accountType);
			switch (accountType)
			{
				case 1:
					printf("\nOperation: Cash Deposit");
					printf("\nAccount Type: Savings Account");
					break;
				case 2:
					printf("\nOperation: Cash Deposit");
					printf("\nAccount Type: Current Account");
					break;
				default:
					printf("\nInvalid Account Type Entered");
			}
			break;

		case 4:
			printf("\n\nYou selected PIN Change");
			printf("\n1. Savings Account");
			printf("\n2. Current Account");
			printf("\nEnter your choice: ");
			scanf("%d", &accountType);
			switch (accountType)
			{
				case 1:
					printf("\nOperation: PIN Change");
					printf("\nAccount Type: Savings Account");
					break;
				case 2:
					printf("\nOperation: PIN Change");
					printf("\nAccount Type: Current Account");
					break;
				default:
					printf("\nInvalid Account Type Entered");
			}
			break;

		default:
			printf("\nInvalid Operation Entered");
	}
	return 0;
}



