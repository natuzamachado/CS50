#include <stdio.h>
#include <cs50.h>

int main(void) {
    
    int minimum = get_int("Minimum: ");

    int maximum = get_int("Maximum: ");
    // get user input for minimum and a maximum number;
    
    while (minimum < 0 || maximum < 0){
       minimum = get_int("Minimum: ");
       maximum = get_int("Maximum: ");
    }
          
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
