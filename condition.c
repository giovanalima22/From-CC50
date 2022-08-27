#include <stdio.h>
#include <cs50.h>

int main(void)
 {
  //get numbers from user
    int x = get_int("x: ");
    int y = get_int("y: ");

   //conditions to the numbers
    if (x > y)
    {
     printf("x é maior que y\n");
    }
    else if (x < y)
    {
     printf("x é menor que y\n");
    }
    else
    {
     printf("x é igual a y\n");
    }
 }
