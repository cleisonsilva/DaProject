#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

typedef struct Alunos 
struct alunos{
	char y[1],matricula[20],nome[20],cpf[14],curso[30];
};


int desenho_2(){
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
	printf ("\t\t|||            CADASTRAR  ALUNO             |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
}


void cadastro_aluno(){
	FILE* alunoSS;
	struct alunos al;
	alunos = fopen ("alunos.txt", "ab");
	if (alunos == NULL){
	printf ("\n Erro Interno!");
	}
	else{
	do{
			gets (al.y);
			system ("cls");
			desenho_2();
			printf ("\n Digite o Código do Aluno (Matrícula): ");
			gets (al.matricula);
			printf ("\n Digite o Nome do Aluno: ");
			gets (al.nome);
			printf ("\n Digite seu CPF: ");
			gets (al.cpf);
			printf ("\n Digite o Curso do Aluno: ");
			gets (al.curso);
			fwrite (&al, sizeof(Alunos), 1, alunos);
			printf ("\n Você deseja Cadastrar um novo Aluno? (s/n) ");
		}while (getche() == 's');
		fclose (alunos);
	}
}


void listar_aluno(){
	FILE * alunoSS;
	struct alunos al;
	alunos = fopen ("alunos.txt", "rb");
	if (alunos == NULL){
		
	printf ("\n Erro Interno!");
	}
	else{
	while (fread(&al, sizeof(Alunos), 1, alunoSS) == 1){
		printf ("Código para o Aluno (Matrícula): %s\n", al.matricula);
		printf ("Nome do determinado Aluno: %s\n", al.nome);
		printf ("Digite seu CPF:  %s\n", al.cpf);
		printf ("Digite o Curso do Aluno: \n\n",al.curso);
        printf("\n\n");
		}
	}
	fclose (alunos);
	getch();
}


void remover_aluno(){
	
	FILE* alunos;
	FILE* alunosII;
	char aux[100];
	struct alunos al;
	alunos = fopen ("alunos.txt", "rb");
	alunosII = fopen ("alunosII.txt", "ab");
	if (alunos == NULL){
		
		printf ("\n Erro Interno! ");
	}
	else{
		printf ("\n Digite o Código do Aluno(Matrícula): ");
		fflush (stdin);
		gets (aux);
		while (fread(&p, sizeof(Alunos), 1, alunos) == 1){
			if (strcmp (al.matricula, aux) == 1){
				fwrite (&p, sizeof(Alunos), 1, alunosII);
			}
		}
		fclose (aluno);
		fclose (alunosII);
		system ("cls");
		printf ("\n\n")
		printf ("\n\n Removido com Sucesso !");
		printf("\n\n")
		getch();
		system ("del alunos.txt");
		system ("ren alunosII.txt pacientes.txt");
  }
}

void editar_aluno(){
	
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




void remover_unico_aluno(){
	FILE* aluno;
	FILE* alunoII;
	char aux[100];
	struct alunos al;
	aluno = fopen ("alunos.txt", "rb");
	alunoII = fopen ("alunosII.txt", "ab");
	if (aluno == NULL){
		
		printf ("\n\nErro Interno!");
	}
	else{
		printf ("\n Digite a Matrícula do Aluno:  ");
		fflush (stdin);
		gets (aux);
		while (fread(&p, sizeof(Alunos), 1, aluno) == 1){
			if (strcmp (al.matricula, aux) == 1){
				fwrite (&p, sizeof(Alunos), 1, alunoII);
			}
		}
		fclose (aluno);
		fclose (alunoII);
		system ("cls");
		printf ("\n\n Aluno Removido!");
		getch();
		system ("del alunos.txt");
		system ("ren alunosII.txt alunos.txt");
}
}
