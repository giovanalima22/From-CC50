#include <cs50.h>
#include <stdio.h>

int main(void)
{
      // TODO: Solicite o valor inicial ao usuário
        int start;
        do {
            start = get_int("População inicial: ");
        }
        while(start < 9);
     // TODO: Solicite o valor final ao usuário

        int end;
        do{
            end = get_int("População final: ");
        }
        while(end < start);
     // TODO: Calcule o número de anos até o limite
        int year = 0;
        do{
            start = start + (start / 3) - (start / 4);
            year++;
        }
        while(start < end);
     // TODO: Imprima o número de anos
     printf("Years: %i\n", year);

}
