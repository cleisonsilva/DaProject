#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>


typedef struct Pacientes 
	struct pacientes {
	
	char y[1],nome[20],data_nascimento[20],cpf[15],rua[20],bairro[20],codigo[20];
};


int desenho_1(){
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
	printf ("\t\t|||            CADASTRAR PACIENTE           |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
}

void cadastro_paciente(){
	FILE* pacienteSS;
	struct pacientes pa;
	pacientes = fopen ("pacientes.txt", "ab");
	if (pacientes == NULL){
	printf ("\n Erro Interno!");
	}
	else{
	do{
			gets (pa.y);
			system ("cls");
			desenho_1();
			printf ("\n Digite o Codigo do Paciente: ");
			gets (pa.codigo);
			printf ("\n Digite o Nome do Paciente: ");
			gets (pa.nome);
			printf ("\n Digite sua Data de Nascimento:[**/**/****] ");
			gets (pa.data);
			printf ("\n Por favor numere seu CPF: ");
			gets (pa.cpf);
			printf ("\n  Digite sua Rua: ");
			gets (pa.rua);
			printf ("\n Seu Bairro seguido do numero: ");
			gets (pa.bairro);
			fwrite (&p, sizeof(Pacientes), 1, pacientes);
			printf ("\n Você deseja Cadastrar um novo paciente? (s/n) ");
		}while (getche() == 's');
		fclose (pacientes);
	}
}


void listar_paciente(){
	FILE * pacienteSS;
	struct pacientes pa;
	paciente = fopen ("pacientes.txt", "rb");
	if (paciente == NULL){
	printf ("\n Erro Interno!");
	}
	else{
	while (fread(&pa, sizeof(Pacientes), 1, pacienteSS) == 1){
		printf ("Código para Paciente: %s\n", pa.codigo);
		printf ("Nome do determinado Paciente: %s\n", pa.nome);
		printf ("Data de Nascimento do Paciente: %s\n", pa.data);
		printf ("CPF do Paciente: %s\n", pa.cpf);
		printf ("Endereço rua & bairro do Paciente: %s  ,  %s\n\n", pa.rua,pa.bairro);
        printf("\n\n");
		}
	}
	fclose (paciente);
	getch();
}


void remover_paciente(){
	FILE* paciente;
	FILE* pacienteII;
	char aux[100];
	struct pacientes pa;
	paciente = fopen ("pacientes.txt", "rb");
	pacienteII = fopen ("pacientesII.txt", "ab");
	if (paciente == NULL){
		printf ("\n Erro Interno! ");
	}
	else{
		printf ("\n Digite o Código do Paciente: ");
		fflush (stdin);
		gets (aux);
		while (fread(&p, sizeof(Paciente), 1, paciente) == 1){
			if (strcmp (p.codigo, aux) == 1){
				fwrite (&p, sizeof(Paciente), 1, pacienteII);
			}
		}
		fclose (paciente);
		fclose (pacienteII);
		system ("cls");
		printf ("\n\n")
		printf ("\n\n Removido com Sucesso !");
		printf("\n\n")
		getch();
		system ("del pacientes.txt");
		system ("ren pacientesII.txt pacientes.txt");
  }
}


void editar_paciente(){
	
	char palavra[50];
    FILE *arq, *aux;
    arq = fopen("pacientes.txt", "r+b");
    if (arq == NULL){
        printf("\nErro Interno!");
        system("pause");
        exit(1);
    }else{
        system("cls");
        fflush(stdin);
        printf("\nDigite o Nome: \n\n");
        gets(palavra);
        while(fread(&pacientes, sizeof(Pacientes), 1, arq) == 1){
            if(palavra == pacientes.nome){
            printf("\nInsira o nome :\n\n");
            printf("\nNome: ");
            gets(pacientes.nome);
            printf("\n Insira a Data de Nascimento:");
		    gets(pacientes.data_nascimento);
            printf("\n Insira o CPF: ");
            gets(pacientes.cpf);
            printf("\n Digite o Código: ");
	        gets(pacientes.codigo);
            printf("\n Insira a Rua: ");
            gets(pacientes.rua)
            printf("\n Insira o Bairro: ");
            gets(pacientes.bairro);
            printf("\n\n Novos dados inseridos com sucesso!");
              system("pause");
		      fwrite(&pacientes, sizeof(Pacientes), 1, aux);
            }else{
                printf("\nPaciente não encontrado.\n");
            }
        }
    }
    fclose(aux);
    fclose(arq);
    system("del pacientes.txt");
    system("ren auxiliarII.txt pacientes.txt");
}	
	


void remover_unico_paciente(){
	FILE* paciente;
	FILE* pacienteII;
	char aux[20];
	struct pacientes pa;
	paciente = fopen ("pacientes.txt", "rb");
	pacienteII = fopen ("pacientesII.txt", "ab");
	if (paciente == NULL){
		
		printf ("\n\nNenhum paciente cadastrado!");
	}
	else{
		printf ("\nDigite o Código do Paciente: ");
		fflush (stdin);
		gets (aux);
		while (fread(&p, sizeof(Pacientes), 1, paciente) == 1){
			if (strcmp (pa.codigo, aux) == 1){
				fwrite (&p, sizeof(Pacientes), 1, pacienteII);
			}
		}
		fclose (paciente);
		fclose (pacienteII);
		system ("cls");
		printf ("\n\n");
		printf (" Paciente Removido! ");
		printf ("\n\n");
		getch();
		system ("del pacientes.txt");
		system ("ren pacientesII.txt pacientes.txt");
}
}

