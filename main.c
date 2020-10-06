#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, result;
	char op;
	
	printf("enter the calculation : ");
	scanf("%d%c%d", &a, &op, &b);
	
	if (op == '+')
		result = a+b;
	else if (op == '-')
		result = a-b;
	else if (op == '*')
		result = a*b;
	else 
		result = a/b;
	
	printf("%d%c%d = %d", a, op ,b, result);
	
	return 0;
}
