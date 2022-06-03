#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main-Determine if a random number is positive, negative or zero.
 *
 *Return: 0 success
 */

int main(void)
{

int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
       /* you code goes there */
if (n > 0)
{
printf ("%dis%s\n", n, "positive");
}
else if (n == 0)
{
printf ("%dis%s\n", n, "zero");
}
else 
{
printf ("%dis%s\n", n,"negative");
}
return(0);
}
