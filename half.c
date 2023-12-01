#include <stdio.h>
#include <cs50.h>

int main(void) {

    
    float bill;
    float tax;
    int tip;
    
    float tipWithBill;
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
        tip = get_int("Tip percent: ");

    }  while (tip < 0);
   
          
    // calculate tax, tip, total bill and its half 
    
          tax = bill * (tax / 100);
          tipWithBill = (bill + tax) * ((float) tip / 100);
    
          totalBill =  bill + tax + tipWithBill;
          half = totalBill / 2;

    printf("You will owe %.2f each!\n", half);
}
