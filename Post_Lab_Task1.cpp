#include <stdio.h>
int main()
{
	float celsius;
	printf("This is a program written in C to practice if-else statements");
	printf("\nEnter the temperature in Celsius: ");
	scanf("%f",&celsius);
	printf("The temperature entered by the user is: %.2f", celsius);
	if (celsius< 15)
	{
	  printf("\nTemperature is COLD");
}
     else if (celsius>=15 && celsius <=30)
     {
     	 printf("\nTemperature is NORMAL");
	 }
      
     else //celsius >30
      {
      	 printf("\nTemperature is HOT");
     	
	  }
	  return 0; 
}

