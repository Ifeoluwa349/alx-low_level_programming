#include <stdlib.h>                                                                                                                     
#include <time.h>                                                                                                                       
                                                                                                                                        
/**                                                                                                                                     
 * main - Entry point                                                                                                                   
 *                                                                                                                                      
 * Return: Always 0 (Sucess/correct)                                                                                                    
 */                                                                                                                                      
                                                                                                                                      
int main(void)                                                                                                                          
{                                                                                                                                       
int n;                                                                                                                                  
rand(time(0));                                                                                                                          
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is positive\n", n);
}
return (0);
}
