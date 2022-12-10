#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if(n > 5)
{
  printf("%d is %s\n", n, "is greater than 5");
}
else if(n < 0 && n!=0)
{
  printf("%d is %s\n", n, "and is less than 6 and not 0");
}  
else                                                                    
{  
 printf("%d is %s\n", n, "and is 0");                                           }
return (0);
}
