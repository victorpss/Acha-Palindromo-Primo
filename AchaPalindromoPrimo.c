#include <stdio.h>

int main (void) {

    int num = 1, invertido, aux, on = 1, resultado = 0, i;

    while (on){
        invertido = 0;
        aux = num;
    
        /* Aqui é feita a inversão do número */
        while (aux > 0) {
        invertido = (invertido*10) + (aux % 10);
        aux = aux / 10;
        }
    
    
        /* Verifica se é palíndromo */
        if (num == invertido) {
            
                for (i = 2; i <= num / 2; i++) { /* Este loop fará as divisões para ver se o número é primo */
                    
                    if (num % i == 0) { /* Se ele não for primo, esse if é acionado e incrementa a variável "resultado" */
                        resultado++;
                        break;
                    }
                }
                
                if (resultado == 0){ /* Se a variável resultado não foi incrementada, quer dizer que esse número palíndromo é primo */
                    printf("%d é um número primo\n", num);
                }
        }
        
        resultado = 0; /* Reseta a variável "resultado" caso ela tenha sido incrementada anteriormente. */
        num++;
    }

    return 0;

}
