#include <stdio.h>

int main() {
    char nome[50];
    float nota, nota2, nota3, med;


    printf("Digite o nome do aluno e as 3 notas do bimestre: \n");
    scanf("%s", nome);
    scanf("%f", &nota);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    med = (nota + nota2 + nota3) / 3;

    if (med > 7) {
        printf("%s está aprovado!\n", nome);
    } else if (med >= 4 && med <= 6.7) {
        printf("%s está de exame final.\n", nome);
    } else {
        printf("%s está reprovado.\n", nome);
    }

    return 0;
}