#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    float X, Y; //Variáveis utilizadas para receber as coordenadas

    //Loop para ficar executando o recebimento de dados
    do
    {
        scanf("%f %f", &X, &Y); //Recebe as coordenadas

        if ((X != 0) && (Y != 0))
        {   //Condição para verificar em qual quadrante está o ponto
            //Comparações para verificar e dizer onde o ponto está
            if (X > 0)
            {
                if (Y > 0)
                    printf("primeiro\n");
                else
                    printf("quarto\n");
            }
            else
            {
                if (Y > 0)
                    printf("segundo\n");
                else
                    printf("terceiro\n");
            }
        }

    } while ((X != 0) && (Y != 0)); //Condição de continuidade do loop

    return (0);
}
