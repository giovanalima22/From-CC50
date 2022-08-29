#include <stdio.h>
#include <cs50.h>

//identificação das funções
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main (void)
{
    int cents = get_cents();

    //calcula quantas moedas de 25 dar ao usuario
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    //calcula quantas moedas de 10 dar ao usuario
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    //calcula quantas moedas de 5 dar ao usuario
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    //calcula quantas moedas de 1 dar ao usuario
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    //soma moedas

    int coins = quarters + dimes + nickels + pennies;

    printf("%i\n", coins);
}

//função criada para fazer os calculos
int get_cents(void)

{
    int cents;
    do
    {// interação com o usuario
        cents = get_int("Troco devido: ");
    }
    while (cents < 0);
    return cents;

}
// como funciona cada função apontada a cima
//calcula 25c
int calculate_quarters(int cents)
{
    int quarters = 0;
    while(cents >= 25)
    {
        cents = cents - 25;
        quarters++;
    }
    return quarters;
}
//calcula 10c
int calculate_dimes(int cents)
{
    int dimes = 0;
    while(cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }
    return dimes;
}
//calcula 5c
int calculate_nickels(int cents)
{
    int nickels = 0;
    while(cents >= 5)
    {
        cents = cents - 5;
        nickels++;
    }
    return nickels;
}
//calcula 1c
int calculate_pennies(int cents)
{
    int pennies = 0;
    while(cents >= 1)
    {
        cents = cents - 1;
        pennies++;
    }
    return pennies;
}
