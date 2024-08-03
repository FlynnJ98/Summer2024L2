#include "mbed.h"

/* Fibonacci Numbers: Next term is the sum of the previous two terms.The frst two terms of the fibonacci 
   sequence are 0 followed by 1. This program is using a simple loop.

   Program starts by calling out the terms, t_1 = 0 & t_2 = 1. We then can state the max amount of terms
   we would like in the series. we use i=2 as the start point and i is less then max terms which is 10. 
   i++ increments the value each loop. the next term will start with 0 & 1 and then add the previous two 
   terms to get the next term in the sequence. 
*/

int t_1 = 0;
int t_2 = 1;
int next_term = 0;
int max_terms = 10;

int main()
{
   
    printf("Fibonacci Series: %d, %d, ", t_1 , t_2);
    for( int i=2; i<max_terms; i++){
        next_term = t_1 + t_2;
        printf("%d, ", next_term);
            t_1 = t_2;
            t_2 = next_term;
   }
    printf("\r\n");

    while (true) {

    }
}

