#include <stdio.h>
int main ()
{
int resposta;
int ContaRespostas = 0;


printf("\n\nQuiz NARUTINHO, teste seu conhecimento!\n\n");

for (int contador = 3; contador >= 0; contador--){
  while (contador != 0){
    printf ("\nQual é o Nome da Biju de Uma Cauda?\n 1) Shokaku.\n 2) Shiukaku\n 3) Shikaku\n 4) Shukaku\n Resposta: ");
    scanf ("%d", &resposta);
    if (resposta == 4)
    {
    printf ("\nVocê acertou\n");
    ContaRespostas++;
    break;
    }
    else {
    printf ("\nVocê errou\n");
    contador--;
    printf("\nVocê tem %d / 3 tentativas\n", contador);
    }
  }
  while (contador != 0){
    printf ("\nQuais São Os Membros Da Equipe Da Kurenai?\n1) Neji, Rock Lee e Tenten.\n2) Shino, Hinata e Kiba\n3) Naruto, Sasuke e Sakura\n4) Choji, Shikamaru e Ino\n Resposta: ");
    scanf ("%d", &resposta);

    if (resposta == 2)
    {
    printf ("\nVocê acertou\n");
    ContaRespostas++;
    break;
    }

    else {
    printf ("\nVocê errou\n");
    contador--;
    printf("\nVocê tem %d / 3 tentativas\n", contador);
    }
  }
  while (contador != 0){
    printf ("\nDeidara é de qual aldeia?\n1) Aldeia da Pedra\n2) Aldeia da Névoa\n3) Aldeia do Som\n4) Aldeia da Cachoeira\n Resposta: ");
    scanf ("%d", &resposta);

    if (resposta == 1)
    {
    printf ("\nVocê acertou\n");
    ContaRespostas++;
    break;
    }

    else {
    printf ("\nVocê errou\n");
    contador--;
    printf("\nVocê tem %d / 3 tentativas\n", contador);
    }
  }
  while (contador != 0){
    printf ("\nNo Mundo Do Tsukyomi Qual Foi o Sonho De Kiba? \n1) Cuidando de Cachorros Abandonados\n2) Sendo Hokage\n3) Sendo Sensei\n4) Namorando com a Hinata\n Resposta: ");
    scanf ("%d", &resposta);

    if (resposta == 2)
    {
    printf ("\nVocê acertou\n");
    ContaRespostas++;
    break;
    }

    else {
    printf ("\nVocê errou\n");
    contador--;
    printf("\nVocê tem %d / 3 tentativas\n", contador);
    }
  }
  while (contador != 0){
    printf ("\nQuais os nomes dos principais filhos de Kaguya? \n1) Hagoromo e Zetsu\n2) Hamura e Zetsu\n3) Hagoromo e Indra\n4) Hagoromo e Madara\n Resposta: ");
    scanf ("%d", &resposta);

    if (resposta == 3)
    {
    printf ("\nVocê acertou\n");
    ContaRespostas++;
    break;
    }

    else {
    printf ("\nVocê errou\n");
    contador--;
    printf("\nVocê tem %d / 3 tentativas\n", contador);
    }
  }
  printf("\nVocê acertou %d / 5 quetões", ContaRespostas);
  
return 0;
}
}