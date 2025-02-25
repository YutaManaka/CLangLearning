#include <stdio.h>

int
main(void)
{
    int water_price_with_tax, milk_price_with_tax, change;
    double tax_rate;

    tax_rate = 0.05;
    water_price_with_tax = (int) (198 * (1 + tax_rate));
    milk_price_with_tax = (int) (138 * (1 + tax_rate));

    change = 1000 - (water_price_with_tax + milk_price_with_tax * 2);

    printf("%d円\n", change);
    return 0;
}