/***************************************************************/
/**                                                           **/
/**   Felipe Beserra de Oliveira                 13683702     **/
/**   Exercício-Programa 1                                    **/
/**   Professor: Yoshiharu Kohayakawa                         **/
/**   Turma: 03                                               **/
/**                                                           **/
/***************************************************************/

#include <stdio.h>

int main() { 
    int seed, attempts, pass, guess;
    
    printf("Bem vinda(o) ao Numle\n");

    printf("Digite a semente para sortear a senha (0 a 10000): ");
    scanf("%d", &seed);
    pass = ((8121 * seed + 28411) % 134456) % 100000;
    printf("Quantidade de tentativas (1 a 10): ");
    scanf("%d", &attempts);

    while (attempts > 0) {
        printf("Digite a tentativa (0 a 99999): ");
        scanf("%d", &guess);
  
        /* Threat digits from left to rigth */
        /* Always 5 digits */
        /* Check if digit is at the right place */
        /* Output in PT-BR (translate digit to language) */
        /* Check if digit is at the wrong place */
        /* Output in PT-BR (translate digit to language) */

        /* If pass and guess are equal, end and congratulate*/
        /* Else, attempts--*/

        if(pass == guess) {
            printf("Voce acertou! A senha eh de fato %d.", pass);
            break;
        }
        attempts--;
    }

    if (attempts==0) {
        printf("Voce perdeu! A senha era %d.", pass);
    }
    return 0;
}
