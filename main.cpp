#include "mbed.h"

/* Fibonacci Numbers: Next term is the sum of the previous two terms.The first two terms of the fibonacci 
   sequence are 0 followed by 1. This program is using recursive function.

   Program starts by calling out the terms, t_1 = 0 & t_2 = 1. We then can state the max amount of terms
   we would like in the series. we use i=0 as the start point and i is less then max terms which is 10. 
   i++ increments the value by 1. if n = 0, return 0, if n = 1 return 1. Else use the fib of previous terms
   and add this to the previous two terms. 
   The next term will start with 0 & 1 and then add the previous two 
   terms to get the next term in the sequence. 
*/

int t_1 = 0; // term 1 is 0
int t_2 = 1; // term 2 is 1
int next_term = 0;

int max_terms = 10; // max amount of terms being 10

int fib(int n){
   // inp: position of the fib sequence
   // out: the number in that sequence
if(n==0)
    return 0; // if n = 0, return 0
if(n==1)
    return 1; // if n = 1, return 1
else{
    return(fib(n-1) + (fib(n-2))); // Return Fib of previous term and add this to the previous 2 terms. 
        
    }

    return 0;
}

int main()
{
    
    printf("Fibonacci Series Recursive Function:"); // print the statement within the brackets
        for(int i=0; i<max_terms; i++) // i starts at 0, i is less than 10, i increments by 1.
        printf("%d, ", fib(i)); // print the number of fib i. 

    printf("\r\n");

    while (true) { // not needed for this code. 

    }
}

