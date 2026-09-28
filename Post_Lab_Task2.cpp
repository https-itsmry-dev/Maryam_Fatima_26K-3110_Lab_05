#include <stdio.h>
int main ()
{
	int balance;
	printf("This program is written in C to practise nested if-else conditions");
	printf("\nEnter the balance: ");
	scanf("%d", &balance);
	printf("\nThe balance entered by the user is: %d", balance);
	if (balance<0)
    {
		printf("\nInvalid Balance Entered");
	 }
	else if (balance <500)
	  {
	  	printf("\nLow Balance");
	  }
	  else if (balance >=500 && balance <=2000)
	    {
	  	   printf("\nSufficient Balance");
	    }
	     else // balance >2000
	        {
	        	printf("\nPremium Balance");
			}
    return 0;
}


