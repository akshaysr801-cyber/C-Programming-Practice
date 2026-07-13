/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() 
{
    int n, i, prime = 1;

    printf("Enter a number :");
    scanf("%d",&n);
    
    
    if ( n < 2)
    prime = 0;
    else
    {
       for(i = 2 ; i <= n/2 ; i++)
       {
       
             if (n % i ==0)
          {
           prime =0;
           break ;
       }
    }
    
}


   if (prime)
    printf("it is a prime number");
   else 
    printf("not a prime number");
   
   return 0; 
}
    