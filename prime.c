#include <stdio.h>
#include <cs50.h>

int main(void) {

    // get user input for minimum and a maximum number;
    
    int minimum = get_int("Minimum: ");

    int maximum = get_int("Maximum: ");

    //minimum and maximum should be positive numbers greater than zero;
    
    do
    {
        minimum = get_int("Minimum: ");
      
    } while (minimum < 0);

    do
    {
        maximum = get_int("Maximum: ");

    } while (maximum < 0);
          
    // prime is a number that is only divisible by 1 and itself
    //print only prime numbers between minimum and maximum
   
        for (int i = minimum; i <= maximum; i++)
        {   
            if ( i != 1 && i % 2 != 0 || i == 2)
            {
                printf("%i\n", i);
            }
        }
}
