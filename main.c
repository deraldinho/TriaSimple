//
// Created by Deraldo Palomino Filho on 06/07/2021.
// course: BACHARELADO EM ENGENHARIA DE SOFTWARE
// Matricula: 21111385-5
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct sintomas{
    int febre;
    int dor_cabeca;
    int secr_nasal;
    int dor_garganta;
    int tosse_seca;
    int dific_respiratoria;
    int dor_corpo;
    int diarreia;
    int contato_pessoa_covid;
    int loc_aglomeracao;
    int nota_avaliacao;
}Sintomas;

typedef struct paciente{
    char cpf[14];
    char nome[255];
    char sexo;
    int idade;
    Sintomas sint;
}Paciente;

int verificar_sintoma(char aux);


int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  FILE * arquivo;
  char nome_arquivo[19];
  Paciente paci;
  int menu = -1;
  while(menu != 0){
             printf("Digite seu CPF: \n");
             gets(paci.cpf);
             printf("Digite seu NOME: \n");
             gets(paci.nome);
             printf("Digite seu sexo (M)Masculino (F)Feminino\n");
             scanf("%c",&paci.sexo);
             printf("Digite sua idade: \n");
             scanf("%d",&paci.idade);
             system("cls");
             char aux;
             printf("Esta com febre? (S)sim  (N)Não\n");
             fflush(stdin);
             scanf("%c",&aux);
             paci.sint.febre = verificar_sintoma(aux);
             printf("Esta com dor de cabeça? (S)sim  (N)Não\n");
             fflush(stdin);
             scanf("%c",&aux);
             paci.sint.dor_cabeca = verificar_sintoma(aux);
             printf("Esta com nariz escorrendo? (S)sim  (N)Não\n");
             fflush(stdin);
             scanf("%c",&aux);
             paci.sint.secr_nasal = verificar_sintoma(aux);
             printf("Esta com dor na garganta? (S)sim  (N)Não\n");
             fflush(stdin);
             scanf("%c",&aux);
             paci.sint.dor_garganta = verificar_sintoma(aux);
             printf("Esta com tosse Seca (S)sim  (N)Não\n");
             fflush(stdin);
             scanf("%c",&aux);
             paci.sint.tosse_seca = verificar_sintoma(aux);
             printf("Esta com dificuldade ao respitrar? (S)sim  (N)Não\n");
             fflush(stdin);
             scanf("%c",&aux);
             paci.sint.dific_respiratoria = verificar_sintoma(aux);
             printf("Esta com dor no corpo? (S)sim  (N)Não\n");
             fflush(stdin);
             scanf("%c",&aux);
             paci.sint.dor_corpo = verificar_sintoma(aux);
             printf("Esta com Diarreia? (S)sim  (N)Não\n");
             fflush(stdin);
             scanf("%c",&aux);
             paci.sint.diarreia = verificar_sintoma(aux);
             printf("Esta com alguem que contraiu COVID-19 (S)sim  (N)Não\n");
             fflush(stdin);
             scanf("%c",&aux);
             paci.sint.contato_pessoa_covid = verificar_sintoma(aux);
             printf("Esta aglomerou ultimamente? (S)sim  (N)Não\n");
             fflush(stdin);
             scanf("%c",&aux);
             paci.sint.loc_aglomeracao = verificar_sintoma(aux);
             paci.sint.nota_avaliacao = 0;
             if (paci.sint.febre == 1)
                paci.sint.nota_avaliacao = paci.sint.nota_avaliacao+5;
             if(paci.sint.dor_cabeca == 1 )
                paci.sint.nota_avaliacao = paci.sint.nota_avaliacao+1;
             if(paci.sint.secr_nasal == 1)
                paci.sint.nota_avaliacao = paci.sint.nota_avaliacao+1;
             if(paci.sint.dor_garganta == 1)
                paci.sint.nota_avaliacao = paci.sint.nota_avaliacao+1;
             if(paci.sint.dific_respiratoria == 1)
                paci.sint.nota_avaliacao = paci.sint.nota_avaliacao+10;
             if(paci.sint.dor_corpo == 1)
               paci.sint.nota_avaliacao = paci.sint.nota_avaliacao+1;
             if(paci.sint.diarreia == 1)
               paci.sint.nota_avaliacao = paci.sint.nota_avaliacao+1;
             if(paci.sint.contato_pessoa_covid == 1)
               paci.sint.nota_avaliacao = paci.sint.nota_avaliacao+10;
             if(paci.sint.loc_aglomeracao == 1)
               paci.sint.nota_avaliacao = paci.sint.nota_avaliacao+3;
             
             strcpy(nome_arquivo, paci.cpf);
             strcat(nome_arquivo,".txt");
             arquivo = fopen(nome_arquivo,"a");
             if(arquivo == NULL){
                        printf("deu não man");
             }else{
                    fprintf(arquivo,"CPF: %s\n",paci.cpf);
                    fprintf(arquivo,"NOME: %s\n",paci.nome);
                    fprintf(arquivo,"SEXO: %c\n",paci.sexo);
                    fprintf(arquivo,"IDADE: %d\n",paci.idade);
                    fprintf(arquivo,"%d\n",paci.sint.nota_avaliacao);
                    //print
                    printf("%s\n",nome_arquivo);
					printf("%s\n",paci.cpf);
					printf("%s\n",paci.nome);
					printf("%c\n",paci.sexo);
					printf("%d\n",paci.idade);
					printf("%d\n",paci.sint.febre);
					printf("%d\n",paci.sint.dor_cabeca);
					printf("%d\n",paci.sint.secr_nasal);
					printf("%d\n",paci.sint.dor_garganta);
					printf("%d\n",paci.sint.tosse_seca);
					printf("%d\n",paci.sint.dific_respiratoria);
					printf("%d\n",paci.sint.dor_corpo);
					printf("%d\n",paci.sint.diarreia);
					printf("%d\n",paci.sint.contato_pessoa_covid);
					printf("%d\n",paci.sint.loc_aglomeracao);
					printf("%d\n",paci.sint.nota_avaliacao);
					if(paci.sint.nota_avaliacao > -1 && paci.sint.nota_avaliacao <= 9){
						fprintf(arquivo,"Por favor ir para Baixo Risco");
						printf("Risco Baixo\n");
					}
					else if(paci.sint.nota_avaliacao > 10 && paci.sint.nota_avaliacao <= 19){
						fprintf(arquivo,"Por favor ir para Médio Risco");
						printf("Risco Médio!\n");
					}else if(paci.sint.nota_avaliacao > 20){
						fprintf(arquivo,"Por favor ir para Grande Risco");
						printf("Risco Alto!\n");
					}
             }
             fclose(arquivo);
             printf("Deseja continuar? (0)Não, (1)Sim");
             scanf("%d",&menu);
             menu = 0;
  }

  
  system("PAUSE");
  return 0;
}

int verificar_sintoma(char aux){
    if(aux == 's' || aux == 'S')
           return 1;
    if(aux == 'n' || aux == 'N')
           return 0;
}
