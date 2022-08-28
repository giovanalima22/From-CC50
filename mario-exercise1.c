#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura;
    do
    {
       altura = get_int("Altura: ");
    }//enquanto a altura for menor que 1 ou maior que 8 continue perguntando "Altura: "
    while ( altura < 1 || altura > 8);
    //para linha começa em 0; linha menor que altura; incrementa +1 linha
    for (int linha = 0; linha < altura; linha++)
    {// para coluna começa em 0; coluna menor que altura; incrementa +1 coluna
        for (int coluna = 0; coluna < altura; coluna++)
          {// se a linha + a coluna for menor que a altura da piramide - 1
              if (linha + coluna < altura - 1)
                printf(" ");//printa um espaço em branco
            else {//senao printa uma hash
                printf("#");
            }

          }
    printf("\n");
    }

}
