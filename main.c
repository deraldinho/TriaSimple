//
// Created by deraldinho on 11/07/2021.
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

void inicio();

int main() {
    setlocale(LC_ALL, "Portuguese");
    inicio();
    printf("\n");
    return 0;
}

void inicio(){

}
