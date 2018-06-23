#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

typedef struct Supervisores
struct supervisores{
	char y[1],codigo[20],nome[20],curso[20];
};


int desenho_3(){
	system("cls");
	system("color 5e");
	printf ("\t\t|||=========================================|||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||             [M] [E] [N] [U]             |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||            CADASTRAR SUPERVISOR         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
	
	
void cadastrar_supervisores(){
	FILE* supervisoreSS;
	struct supervisores su;
	supervisores = fopen ("supervisores.txt", "ab");
	if (supervisores == NULL){
		
	printf ("\n Erro Interno!");
	}
	else{
	do{
			gets (su.y);
			system ("cls");
			desenho_3();
			printf ("\n Digite o Código do Supervisor: ");
			gets (su.codigo);
			printf ("\n Digite o Nome do Supervisor: ");
			gets (su.nome);
			printf ("\n Digite o Curso: ");
			gets (su.curso);
			fwrite (&su, sizeof(Supervisores), 1, supervisores);
			printf ("\n Você deseja Cadastrar um novo Supervisor? (s/n) ");
		}while (getche() == 's');
		fclose (supervisores);
	}
}


void listar_supervisores(){
		
	FILE * supervisoreSS;
	struct supervisores su;
	supervisores = fopen ("supervisores.txt", "rb");
	if (supervisores == NULL){
		
	printf ("\n Erro Interno!");
	
	}
	else{
	while (fread(&su, sizeof(Supervisores), 1, supervisoreSS) == 1){
		printf ("Código para o Supervisor: %s\n", su.codigo);
		printf ("Nome do determinado Supervisor %s\n", su.nome);
		printf ("Digite o Curso:  %s\n", su.curso);
        printf("\n\n");
		}
	}
	fclose (supervisores);
	getch();
}


void remover_supervisores(){
	FILE* supervisores;
	FILE* supervisoresII;
	char aux[100];
	struct supervisores su;
	supervisores = fopen ("supervisores.txt", "rb");
	supervisoresII = fopen ("supervisoresII.txt", "ab");
	if (supervisores == NULL){
		
		printf ("\n Erro Interno! ");
	}
	else{
		printf ("\n Digite o Código do Supervisor: ");
		fflush (stdin);
		gets (aux);
		while (fread(&su, sizeof(Supervisores), 1, supervisores) == 1){
			if (strcmp (su.codigo, aux) == 1){
				fwrite (&p, sizeof(Supervisores), 1, supervisoresII);
			}
		}
		fclose (supervisores);
		fclose (supervisoresII);
		system ("cls");
		printf ("\n\n")
		printf ("\n\n Removido com Sucesso !");
		printf("\n\n")
		getch();
		system ("del supervisores.txt");
		system ("ren supervisoresII.txt pacientes.txt");
  }
}


void editar_supervisores(){
	
    char palavra[50];
    FILE *arq, *aux;
    arq = fopen("supervisores.txt", "r+b");
    if (arq == NULL){
        printf("\nErro Interno!");
        system("pause");
        exit(1);
    }else{
        system("cls");
        fflush(stdin);
        printf("\nDigite o Nome: \n\n");
        gets(palavra);
        while(fread(&supervisores, sizeof(Supervisores), 1, arq) == 1){
            if(palavra == supervisores.nome){
                printf("\nInsira o nome :\n\n");
                printf("\nNome: ");
                gets(supervisores.nome);
                printf("\n Insira o Curso:");
                gets(supervisores.curso);
                printf("\n Insira o novo Código: ");
                gets(supervisores.codigo);
                printf("\n\nNovos dados inseridos com sucesso!");
                system("pause");
                fwrite(&supervisores, sizeof(Supervisores), 1, aux);
            }else{
                printf("\nPaciente não encontrado.\n");
            }
        }
    }
    fclose(aux);
    fclose(arq);
    system("del supervisores.txt");
    system("ren auxiliarII.txt supervisores.txt");
}	


void remover_unico_supervisor(){
	FILE* supervisores;
	FILE* supervisoresII;
	char aux[20];
	struct supervisores su;
	supervisores = fopen ("supervisores.txt", "rb");
	supervisoresII = fopen ("supervisoresII.txt", "ab");
	if (supervisores == NULL){
		printf ("-------------------------------");
		printf ("\n\nNenhum supervisor cadastrado!");
		printf ("\n\n-------------------------------");
	}
	else{
		printf ("\nDigite o Código do Supervisor: ");
		fflush (stdin);
		gets (aux);
		while (fread(&su, sizeof(Supervisores), 1, supervisores) == 1){
			if (strcmp (su.codigo, aux) == 1){
				fwrite (&p, sizeof(Supervisores), 1, supervisoresII);
			}
		}
		fclose (supervisores);
		fclose (supervisoresII);
		system ("cls")
		printf ("\n\n O supervisor cadastrado foi removido.");
		getch();
		system ("del supervisoreses.txt");
		system ("ren supervisoresII.txt supervisores.txt");
}	
