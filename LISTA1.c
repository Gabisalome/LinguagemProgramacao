#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void G01 () {
    printf("Gabriela");
}   

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void G02 () {
 printf ("Resultado: %d\n", 30*27);   
}
//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void G03 (){
 int num1 = 5; 
 int num2 = 8; 
 int num3 = 12;
 float med = (num1 + num2 + num3) / 3.0;
 printf (" media de %d %d %d = %2.f\n" , num1, num2, num3, med);     
}
//4. Faça um programa que leia e imprima um número inteiro.
void G4 () {
    int numero;
    scanf("%d", &numero);
    printf("Numero digitado: %d, numero");
}
//5. Faça um programa que leia dois números reais e os imprima.
void G5 () {
    float numero1;
    float numero2;
    printf (" escreva um numero real: ");
    scanf("%f", &numero1);
    printf (" escreva um numero real: ");
    scanf("%f", &numero2);
    printf (" os numeros reais sao: %.1f, %.f", numero1, numero2);

}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void G6 () {
    int numero;
    // Solicita ao usuário que insira um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Calcula o antecessor e o sucessor
    int antecessor = numero - 1;
    int sucessor = numero + 1;

    // Exibe o resultado
    printf("O antecessor de %d é %d\n", numero, antecessor);
    printf("O sucessor de %d é %d\n", numero, sucessor);

    return 0;
}
//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void G7 () {
    char nome[50], endereco[70], telefone[14];
   
    printf("Nome: ");
    scanf(" %50[^\n]",&nome);
     
     printf("Endereco: ");
     scanf(" %70[^\n]",&endereco);
     
     printf("Telefone: ");
    scanf(" %15[^\n]",&telefone);
    printf("Nome: %s\nEndereço: %s\nTelefone: %s\n",nome,endereco,telefone);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void G8 () {
    int num1, num2, resultado;

    // Solicita ao usuário que insira dois números inteiros
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Calcula a subtração
    resultado = num1 - num2;

    // Exibe o resultado
    printf("A subtração de %d e %d é %d\n", num1, num2, resultado);

    return 0;
}
//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void G9 () {
    float numero, um_quarto;

    // Solicita ao usuário que insira um número real
    printf("Digite um número real: ");
    scanf("%f", &numero);

    // Calcula um quarto do número
    um_quarto = numero / 4;

    // Exibe o resultado
    printf("Um quarto de %.2f é %.2f\n", numero, um_quarto);

    return 0;
}
//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void G10 () {

    // Declaração das variáveis para armazenar os três números reais e o resultado da média
    float num1, num2, num3, media;

    // Solicita ao usuário que insira três números reais
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);

    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número real: ");
    scanf("%f", &num3);

    // Calcula a média aritmética dos três números
    media = (num1 + num2 + num3) / 3;

    // Exibe o resultado da média
    printf("A média aritmética dos números %.2f, %.2f e %.2f é %.2f\n", num1, num2, num3, media);

    return 0;
}
//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void G11 () {
    // Declaração das variáveis para armazenar os dois números reais e os resultados das operações
    float num1, num2;
    float adicao, subtracao, multiplicacao, divisao;

    // Solicita ao usuário que insira dois números reais
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);

    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    // Calcula a adição, subtração, multiplicação e divisão
    adicao = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    // Verifica se o divisor é zero para evitar divisão por zero
    if (num2 != 0) {
        divisao = num1 / num2;
        printf("A divisão de %.2f por %.2f é %.2f\n", num1, num2, divisao);
    } else {
        printf("Divisão por zero não é permitida.\n");
    }

    // Exibe os resultados das outras operações
    printf("A adição de %.2f e %.2f é %.2f\n", num1, num2, adicao);
    printf("A subtração de %.2f e %.2f é %.2f\n", num1, num2, subtracao);
    printf("A multiplicação de %.2f e %.2f é %.2f\n", num1, num2, multiplicacao);

    return 0;
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void G12 () {
       float numero, quadrado;

    // Solicita ao usuário que insira um número real
    printf("Digite um número real: ");
    scanf("%f", &numero);

    // Calcula o quadrado do número
    quadrado = numero * numero;

    // Exibe o resultado
    printf("O quadrado de %.2f é %.2f\n", numero, quadrado);

    return 0;
}
//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void G13 () {
    float saldo, novo_saldo;

    // Solicita ao usuário que insira o saldo da conta poupança
    printf("Digite o saldo da conta poupança: ");
    scanf("%f", &saldo);

    // Calcula o novo saldo com um reajuste de 2%
    novo_saldo = saldo * 1.02;

    // Exibe o novo saldo
    printf("O novo saldo, após um reajuste de 2%%, é %.2f\n", novo_saldo);

    return 0;
}
//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).
void G14 () {
     float base, altura;
    float perimetro, area;

    // Solicita ao usuário que insira a base e a altura do retângulo
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    // Calcula o perímetro e a área do retângulo
    perimetro = 2 * (base + altura);
    area = base * altura;

    // Exibe os resultados
    printf("O perímetro do retângulo é %.2f\n", perimetro);
    printf("A área do retângulo é %.2f\n", area);

    return 0;
}
//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void G15 () {
     float valor_produto, percentual_desconto, valor_desconto, valor_final;

    // Solicita ao usuário o valor do produto
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    // Solicita ao usuário o percentual de desconto desejado
    printf("Digite o percentual de desconto (em %): ");
    scanf("%f", &percentual_desconto);

    // Calcula o valor do desconto
    valor_desconto = valor_produto * (percentual_desconto / 100);

    // Calcula o valor final do produto após aplicar o desconto
    valor_final = valor_produto - valor_desconto;

    // Exibe os resultados
    printf("O valor do desconto é %.2f\n", valor_desconto);
    printf("O valor do produto após aplicar o desconto é %.2f\n", valor_final);

    return 0;
}
//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main (){
 G15();

return EXIT_SUCCESS;    
}