#include <stdio.h>

int main() {
    int idade;
    float salario, altura, peso;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("A pessoa é maior de idade.\n");
    } else {
        printf("A pessoa é menor de idade.\n");
    }

    printf("Digite o salário: ");
    scanf("%f", &salario);

    float salarioMinimo = 1045.00;
  
    if (salario > salarioMinimo) {
        printf("A pessoa ganha mais que o salário mínimo.\n");
    } else {
        printf("A pessoa ganha igual ou menos que o salário mínimo.\n");
    }

   
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    float alturaMinima = 1.8;
    if (altura > alturaMinima) {
        printf("A altura é maior que 1.8 metros.\n");
    } else {
        printf("A altura é igual ou menor que 1.8 metros.\n");
    }

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    float pesoMaximo = 60.0;
    if (peso < pesoMaximo) {
        printf("O peso é menor que 60 kg.\n");
    } else {
        printf("O peso é igual ou maior que 60 kg.\n");
    }

    return 0;
}
