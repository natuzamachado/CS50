#include <stdio.h>
#include <cs50.h>

bool isPrime(int num);

int main(void)
{
    int minimum;
    int maximum;
    
     // get user input for minimum and a maximum number;
    // minimum and maximum should be positive numbers greater than zero;

    do
    {
        minimum = get_int("Minimum: ");
      
    } while (minimum <= 0);

    do
    {
        maximum = get_int("Maximum: ");

    } while (maximum <= 0);
    

        // prime is a number that is only divisible by 1 and itself
        // prints only prime numbers between minimum and maximum

        for ( int i = minimum; i < maximum; i++ )
        { 
            if (isPrime(i))
            {
                printf("%i\n", i);
            }
        }
}


//checks if a number is prime

bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }

    if (num == 2)
    {
        return true;
    }

    for (int i = 2; i < num; i++)
    {
        if ((num % i) == 0)
        {
            return false;
        }
    }
    return true;
}

