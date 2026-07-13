/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>


int main() 
{
	int n,i;
	long long int fact=1;


	printf("Enter a number: ");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	
		fact *= i;
	
		printf("Factorial  = %lld",  fact);

return 0;
}