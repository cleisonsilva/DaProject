#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

typedef struct Agendamentos
struct agendamentos{
	char y[1],codigo_agendamento[20],area_atendimento[20],data_consulta[10],nome[30],codigo[30];
};

int desenho_4(){
	system("cls");
	system("color 2e");
	printf ("\t\t|||=========================================|||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||             [M] [E] [N] [U]             |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||            CRIAR AGENDAMENTO            |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
}

void cria_agendamentos(){
	FILE* agendamento;
	struct agendamentos ag;
	agendamento = fopen ("agendamentos.txt", "ab");
	if (agendamento == NULL){
		printf ("\n\n Erro Interno !");
	}
	else{
	do{
	gets (ag.y);
	system ("cls");
			desenho_4();
			printf ("\nDigite o Código do Agendamento: ");
			gets (ag.codigo_agendamento);
			printf ("\n Digite o Nome : ");
			gets (ag.nome);
			printf("\n Digite o Código: ");
			gets(ag.codigo);
			printf ("\n Digite a área de Atendimento ");
			gets (ag.area_atendimento);
			printf ("\n Marque a Data da Consulta: ");
			gets (ag.data_consulta);
			printf ("\nData da Consulta: ");
			fwrite (&ag, sizeof(Agendamentos), 1, agendamento);
			printf ("\n Deseja Fazer  mais um Agendamento? (s/n) ");
		}
		while (getche() == 's');
		fclose (agendamento);
	}
}


void listar_agendamentos(){
	
	FILE* agendamento;
	struct agendamentos ag;
	agendamento = fopen ("agendamento.txt", "rb");
	if (agendamento == NULL){
		
		printf ("\n\n Erro Interno!");
	}
	else{
		while (fread(&ag, sizeof(Agendamentos), 1, agendamento) == 1){
			printf ("\n\n Código do Agendamento: %s\n", ag.codigo_agendamento);
			printf ("\n\n Nome do Paciente : %s\n", ag.codigo);
			printf("\n\n Código do Paciente : ", ag.codigo);
			printf ("\n\n Área do Atendimento: %s\n", ag.area_atendimento);
			printf ("\n\n Data da Consulta: %s\n\n", ag.data_consulta);
			printf ("\n\n");
		}
	}
	fclose (agendamento);
	getch();
}


void remover_agendamentos(){
	
	FILE* agendamento;
	FILE* agendamentoII;
	char aux[100];
	struct agendamentos ag;
	agendamento = fopen ("agendamento.txt", "rb");
	agendamentoII = fopen ("agendamentoII.txt", "ab");
	if (agendamento == NULL){
		
		printf ("\n\n Erro Interno! ");
	}
	else{
		printf ("\n\n Digite o Código:  ");
		fflush (stdin);
		gets (aux);
		while (fread(&ag, sizeof(Agendamentos), 1, agendamento) == 1){
			if (strcmp (ag.codigo_agendamento, aux) == 1){
				fwrite (&p, sizeof(Agendamentos), 1, agendamentoII);
			}
		}
		fclose (agendamento);
		fclose (agendamentoII);
		system ("cls");
		printf ("\n\n Agendamento Cancelado! ");
		getch();
		system ("del agendamentos.txt");
		system ("ren agendamentos2.txt agendamentos.txt");
 }
}


void editar_agendamentos(){
	
    char palavra[50];
    FILE *arq, *aux;
    arq = fopen("agendamentos.txt", "r+b");
    if (arq == NULL){
        printf("\nErro Interno!");
        system("pause");
        exit(1);
    }
	else{
        system("cls");
        fflush(stdin);
        printf("\nDigite o Código do Agendamento\n\n");
        gets(palavra);
        while(fread(&agendamentos, sizeof(Agendamentos), 1, arq) == 1){
            if(palavra == agendamentos.nome){
                printf("\nInsira o nome :\n\n");
                printf("\nNome: ");
                gets(agendamentos.nome);
                printf("\n Insira o Código do Agendamento:");
                gets(agendamentos.codigo_agendamento);
                printf("\n Insira a Data: ");
                gets(agendamentos.data_consulta);
                printf("\n Insira A área de atendimento: ");
                gets(agendamentos.area_atendimento);
                printf("\nInsira o seu novo Código: ");
                gets(agendamentos.codigo);
                printf("\n\nNovos dados inseridos com sucesso.");
                system("pause");
                fwrite(&agendamentos, sizeof(Agendamentos), 1, aux);
            }else{
                printf("\nPaciente não encontrado.\n");
            }
        }
    }
    fclose(aux);
    fclose(arq);
    system("del agendamentos.txt");
    system("ren auxiliarII.txt agendamentos.txt");
}

