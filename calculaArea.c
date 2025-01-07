#include <stdio.h>

float largura, altura, area;

    int main () {
        printf("Digite a largura:\n");
        scanf("%f", &largura);
        
        printf("Digite a altura:\n");
        scanf("%f", &altura);

    area = largura * altura;
    
        printf("A área do retângulo é: %.2f\n", area);

        return 0;
    }