#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int i, trial=0;
	
	do
	{
		printf("input a number : ");
		scanf("%i", &i);
		
		if (answer > i)
			printf("low!\n");
		else if (answer <i)
			printf("high!\n");
			
		trial++;
	} while(i != answer);
	
	printf("congratulation, number of trial : %i\n", trial);
	
	return 0;
}
