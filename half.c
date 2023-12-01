#include <stdio.h>
#include <cs50.h>

int main(void) {

    
    float bill;
    float tax;
    float tip;
    float totalBill;
    float half;

    // get a positive input for the bill, tax, and tip;
    
    do {

        bill = get_float("Bill before tax and tip: ");
    
    } while (bill < 0);
    
    do 
    {
       tax = get_float("Sale Tax Percent: ");

    } while (tax < 0);

    do 
    {
        tip = get_float("Tip percent: ");

    }  while (tip < 0);
   
          
    // calculate tax, tip, total bill and its half 
    
    tax = bill * (tax / 100);
    tip = (bill + tax) * (tip / 100);
    totalBill =  bill + tax + tip;
    half = totalBill / 2;

    printf("You will owe %.2f each!\n", half);
}
