#include <stdio.h>

  float media_prova(float nota1, float nota2, float nota3);

int main(){
  float nota1 , nota2, nota3 , media;

  printf("Digite a nota da sua nota 01:");
  scanf("%f", &nota1);

  printf("Digite a nota da sua nota 02:");
  scanf("%f", &nota2);
  
  printf("Digite a nota da sua nota 03:");
  scanf("%f", &nota3);

  media = media_prova(nota1, nota2, nota3);

  printf("Media: %.2f", media);

  return 0;
  
}

float media_prova(float nota1, float nota2, float nota3){
  return (nota1 + nota2 + nota3)/3;
}

