#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura, linha, coluna, espaco;

    do
    {
       altura = get_int("Altura: ");
    }//enquanto a altura for menor que 1 ou maior que 8 continue perguntando "Altura: "
    while ( altura < 1 || altura > 8);

    for (linha = 0; linha < altura; linha++)
    {
        for (espaco = 0; espaco < altura - linha - 1; espaco++)
        {
            printf(" ");//printa um espaço em branco
        }

        for (coluna = 0; coluna <= linha; coluna++)
        {//senao printa uma hash
            printf("#");
        }
        printf("  ");//printa dois espaços entre as piramides
        for (coluna = 0; coluna <= linha; coluna++) //mesma estrutura que foi criada anteriormente
        {
            printf("#");
        }
        printf("\n");
    }

}
