------------------------------
 //Primeiro exemplo

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


------------------------------------------
 //Segundo Exemplo 
 
#include <stdio.h>
#include <cs50.h>

int main(void)
{
  //pergunta ao usuario
    char c = get_char("Do you agree? ");
  
 //condição se concorda ou se não concorda
    if (c == 'y' || 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || 'N')
    {
        printf("Not agreed.\n");
    }
}


---------------------------------------------------------
 //Terceiro exemplo: Mario Blocks
 #include <cs50.h>
#include <stdio.h>

int main(void)
{
    //faz a contagem dos blocos 
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
