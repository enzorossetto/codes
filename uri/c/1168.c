#include <stdio.h> //Bibliotecas utilizadas
#include <stdlib.h>

int main()
{
    char V[99999]; //String para receber o número
    int N, led, j; //Recebimento de dados e contador de leds

    scanf("%i", &N); //Recebe o número de casos
    for (int i = 0; i < N; i++)
    { //Executa o processo "N" vezes
        led = 0;
        j = 0;
        fflush(stdin);
        scanf("%s", V); //Recebe o número que se deseja imprimir
        //Verifica qual o número na posição "j" para
        do
        { //contar quantos leds serão necessários
            if (V[j] != '\0')
            { //Caso o número tenha acabado, não executa
                if (V[j] == '1')
                    led = led + 2;
                else if (V[j] == '2')
                    led = led + 5;
                else if (V[j] == '3')
                    led = led + 5;
                else if (V[j] == '4')
                    led = led + 4;
                else if (V[j] == '5')
                    led = led + 5;
                else if (V[j] == '6')
                    led = led + 6;
                else if (V[j] == '7')
                    led = led + 3;
                else if (V[j] == '8')
                    led = led + 7;
                else if (V[j] == '9')
                    led = led + 6;
                else if (V[j] == '0')
                    led = led + 6;
            }
            j = j + 1;
        } while (V[j] != '\0');   //Para quando o número acabar
        printf("%i leds\n", led); //Mostra a quantia de leds necessária
    }

    return (0);
}