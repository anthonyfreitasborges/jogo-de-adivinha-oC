#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    srand(time(NULL));

    setlocale(LC_ALL, "Portuguese");
    int n1;
    int n2, tentativa=1, acerto=0, erro=0, saida=0, escolha=0,inicio, pontoinicio=100;
    int i=0;


    printf("Bem vindo!\n");
    printf("REGRAS:!\n");
    printf("ESCOLHA O NIVEL DE DIFICULDADE!\n");
    printf("1. F�cil (N�mero entre 1 e 10, 5 tentativas)\n");
    printf("2. Medio (N�mero entre 1 e 50, 7 tentativas)\n");
    printf("3. Dificil (N�mero entre 1 e 100, 10 tentativas)\n");
    scanf("%d",&escolha);

    /******/
    switch (escolha){
    case 1:
        inicio=5;
         n1= rand()%10;

        break;
    case 2:
        inicio=7;
        n1= rand()%50;
    ;
        break;
    case 3:
        inicio=10;
         n1= rand()%100;
        break;
    }
    do{
    tentativa++;
    saida++;
     i++;
    printf("Digite um numero!\n");
    scanf("%d",&n2);
    if(n2==n1){
        printf("Parabens voc� acertou \n");
        printf("Sua pontua��o final � %d. \n",pontoinicio);
        i=400;
    }else{
        erro++;
    printf("voc� erreou. \n");
    pontoinicio= pontoinicio-10;
    printf("Sua pontua��o � %d.\n\n", pontoinicio);
    if(n2>n1){
        printf("%d � maior que o numero correto \n",n2);
    }else if(n2<n1){
        printf("%d � menor que o numero correto \n",n2);
    }
     if(erro==inicio){
         printf("voc� errou todos, fez %d tenativas, o numero correto era %d \n", saida,n1);}
    }
    }while(i<inicio);
     if(acerto>n1){
            printf("o numero de acertos � maior que o numero correto");
            }else if(acerto<n1){
            printf("o numero de acertos � menor ao numero correto");
         }else if(acerto == n1){
             printf("o numero de acertos � igual que o numero correto");
         };
/*----------
    srand(time(NULL));
    int nu1 = rand();

    printf("leia o numero%d \n",nu1);
    int nu2 =rand()%100;
    printf("leia o numero%d ",nu2);*/
    return 0;
}
