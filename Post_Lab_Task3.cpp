#include <stdio.h>
int main()
{
	int appointment, doctorAvailable, registrationCompleted;
	printf("This is a fun program written in C to test the logical building of nested if-else");
	printf("\nEnter 1 for Yes or 0 for No to confirm for the appointment ");
	scanf("%d", &appointment);
	printf("\nThe number entered by the user for the appointment is: %d", appointment);
	printf("\nEnter 1 for Yes or 0 for No to confirm for the Doctor Availability ");
	scanf("%d", &doctorAvailable);
	printf("\nThe number entered by the user for the Doctor Availability is: %d", doctorAvailable);
	printf("\nEnter 1 for Yes or 0 for No to confirm for the registration ");
	scanf("%d", &registrationCompleted);
	printf("\nThe number entered by the user to complete the registration is: %d", registrationCompleted);

	printf("\n\nChecking whether the patient has an appointment or not");
	if (appointment == 1)
	{
		printf("\nThe patient has an appointment");
		printf("\nChecking whether the doctor is available or not");
		if (doctorAvailable == 1)
		{
			printf("\nThe doctor is available");
			printf("\nChecking whether the registration is completed or not");
			if (registrationCompleted == 1)
			{
				printf("\nThe registration is completed");
				printf("\n\nThe patient can meet the doctor.");
			}
			else
			{
				printf("\nThe registration is not completed");
				printf("\n\nThe patient cannot meet the doctor.");
			}
		}
		else
		{
			printf("\nThe doctor is not available");
			printf("\n\nThe patient cannot meet the doctor.");
		}
	}
	else
	{
		printf("\nThe patient does not have an appointment");
		printf("\n\nThe patient cannot meet the doctor.");
	}

	return 0;
}
