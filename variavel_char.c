#include<stdio.h> // BIBLIOTECA

int main()  // FUNCAO PRINCIPAL
{
    // VAR
    char caracter; //%c char caracter 'a';
    char nome[20], produto [50]; // %s nome = 'Maria'
    int ano_atual = 2026, ano_nasc, idade, qtd; // %d dia = 10
    float vlr_unitario, total; // %f total = 1234.67 %,2f

    //  INPUT
    printf("Digite uma letra: ");
    scanf("%c", &caracter);

    printf("Qual o seu nome: ");
    scanf("%s", &nome);

    printf("Qual o ano do seu nascimento: ");
    scanf("%d", &ano_nasc);

    printf("Produto: ");
    scanf("%s", &produto);

    printf("Quantidade: ");
    scanf("%d", &qtd);
    
    printf("Valor Unitario: R$ ");
    scanf("%f", &vlr_unitario);

    // PROCESSAMENTO
    idade = ano_atual - ano_nasc;
    total = qtd * vlr_unitario;

    // RETURN
    printf("\nEu digitei a letra %c", caracter);
    printf("\nE me chamo %s da Unipar", nome);
    printf("\nMeu nome eh %s e tenho %d anos.", nome, idade);
    printf("\nComprei qtd %d - %s de R$ %.2f, total R$ %.2f ", qtd, produto, vlr_unitario, total);

    return 0;  // RETORNO 0 - EXECUTOU COM SUCESSO O PROGRAMA

}