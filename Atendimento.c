#include<locale.h>
#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Atendimentos
struct atendimentos{
	char y[1],data_agendamento[20],codigo_atendimento[20],codigo_agendamento[20],nome_aluno[30],aluno_codigo[30],nome_paciente[30],paciente_codigo[30],data_atendimento[15],servico_area[30],nome_supervisor[30],supevisor_codigo[20];
};


int desenho_5(){
	system("cls");
	system("color 7e");
	printf ("\t\t|||=========================================|||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||             [M] [E] [N] [U]             |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||            CRIAR ATENDIMENTOS           |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
}



void criar_atendimento(){
	
	FILE* atendimento;
	struct atendimentos at;
	atendimento = fopen ("atendimentos.txt", "ab");
	if (atendimento == NULL){
		
		printf ("\n\n Erro Interno!");
	}
	else {
		do{
			gets (at.y);
			system ("cls");
			desenho_5();
			printf("\n\n");
			printf ("\n\nDigite o Código do Atendimento: ");
			gets (at.codigo_atendimento);
			printf ("\n\n Digite o Código do Agendamento: ");
			gets (at.codigo_agendamento);
			printf ("\n\n Digite a Data do Agendamento: ");
			gets (at.data_agendamento);
			printf ("\n\n Digite oNome do Aluno: ");
			gets (at.nome_aluno);
			printf("\n\n Digite sua Matrícula: ");
			gets(at.aluno_codigo);
			printf ("\n\nDigite o Nome do Paciente  ");
			gets(at.nome_paciente);
			printf("\n\n Digite o Código do Paciente: ");
			gets(at.paciente_codigo);
			printf("\n\n Digite o Nome do Supervisor: ");
			gets(at.nome_supervisor);
			printf("\n\n Digite o Código do Supervisor: ");
			gets(at.supevisor_codigo);
			printf ("\n\nDigite a Data do Atendimento: ");
			gets (at.data_atendimento);
			printf ("\n\n Digite o Tipo de Serviço a ser Prestado: ");
			gets (at.servico_area);
			fwrite (&p, sizeof(Atendimentos), 1, atendimento);
			printf ("\n Deseja fazer mais um Atendimento? (s/n) ");
		}while (getche() == 's');
		fclose (atendimento);
	}
 }



void listar_atendimento(){
	
	FILE* atendimento;
	struct atendimentos at;
	atendimento = fopen ("atendimentos.txt", "rb");
	if (atendimento == NULL){	
	printf ("\n\n Erro Interno!");
	}
	else{
	while (fread(&at, sizeof(Atendimentos), 1, atendimento) == 1){
	printf ("\nCódigo do Atendimento: %s\n", at.codigo_atendimento);
	printf ("Código do Agendamento: %s\n", at.codigo_agendamento);
	printf ("Data do Agendamento: %s\n", at.data_agendamento);
	printf ("Nome do Aluno: %s\n", at.nome_aluno);
	printf ("Matrícula do Aluno: %s\n", at.aluno_codigo);
	printf ("Nome do Paciente: %s\n", at.nome_paciente);
	printf ("Código do Paciente: %s\n", at.paciente_codigo);
	printf ("Data do Atendimento: %s\n", at.data_atendimento);
	printf ("Serviço Prestado área do atendimento): %s\n", at.servico_area);
	printf ("Nome do Supervisor: %s\n", at.nome_supervisor);
	printf ("Código do Supervisor: %s\n", at.supevisor_codigo);
	printf("\n\n");
    }
	}
	fclose (atendimento);
	getch();
}	


void listar_atendimento_area(){
	
	FILE* atendimento_area;
	struct atendimentos at;
	char palavra[100];
	atendimento_area = fopen ("atendimentos.txt", "rb");
	if (atendimento_area == NULL){
		printf("\n\n Erro Interno!");
	}
	else{
		fflush (stdin);
		printf ("\n\nDigite a Área de Pesquisa: ");
		gets(palavra);
		
		while (fread(&at, sizeof(Atendimentos), 1, atendimento_area) == 1){
			if (strcmp(palavra, at.servico_area) == 0){
			printf ("\nCódigo do Atendimento: %s\n", at.codigo_atendimento);
			printf ("Código do Agendamento: %s\n", at.codigo_agendamento);
			printf ("Data do Agendamento: %s\n", at.data_agendamento);
			printf ("Nome do Aluno: %s\n", at.nome_aluno);
			printf ("Código do Aluno: %s\n",at.aluno_codigo );
			printf ("Nome do Paciente: %s\n", at.nome_paciente);
			printf ("Código do Paciente: %s\n", at.paciente_codigo);
			printf ("Data do Atendimento: %s\n",at.data_atendimento);
			printf ("Serviço Prestado área do Atendimento: %s\n",at.servico_area );
			printf ("Nome do Supervisor: %s\n",at.nome_supervisor );
			printf ("Código do Supervisor: %s\n\n",at.supevisor_codigo);
			printf ("\n\n");
    }
  }
}
   fclose(atendimento_area);
   getch();
}


void listar_atendimento_aluno(){
	
	FILE* atendimento_aluno;
	struct atendimentos at;
	char palavra[100];
	atendimento_area = fopen ("atendimentos.txt", "rb");
	if (atendimento_area == NULL){
		printf("\n\n Erro Interno!");
	}
	else{
		fflush (stdin);
		printf ("\n\nDigite o Nome do Aluno:  ");
		gets(palavra);
		
		while (fread(&at, sizeof(Atendimentos), 1, atendimento_aluno) == 1){
			if (strcmp(palavra, at.nome_aluno) == 0){
			printf ("\nCódigo do Atendimento: %s\n", at.codigo_atendimento);
			printf ("Código do Agendamento: %s\n", at.codigo_agendamento);
			printf ("Data do Agendamento: %s\n", at.data_agendamento);
			printf ("Nome do Aluno: %s\n", at.nome_aluno);
			printf ("Código do Aluno: %s\n",at.aluno_codigo );
			printf ("Nome do Paciente: %s\n", at.nome_paciente);
			printf ("Código do Paciente: %s\n", at.paciente_codigo);
			printf ("Data do Atendimento: %s\n",at.data_atendimento);
			printf ("Serviço Prestado área do atendimento): %s\n",at.servico_area );
			printf ("Nome do Supervisor: %s\n",at.nome_supervisor );
			printf ("Código do Supervisor: %s\n\n",at.supevisor_codigo);
			printf ("\n\n");
    }
  }
}
   fclose(atendimento_aluno);
   getch();
}



void listar_atendimento_paciente(){
	
	FILE* atendimento_paciente;
	struct atendimentos at;
	char palavra[100];
	atendimento_area = fopen ("atendimentos.txt", "rb");
	if (atendimento_area == NULL){
		printf("\n\n Erro Interno!");
	}
	else{
		fflush (stdin);
		printf ("\n\nDigite o Nome do Paciente:  ");
		gets(palavra);
		
		while (fread(&at, sizeof(Atendimentos), 1, atendimento_paciente) == 1){
			if (strcmp(palavra, at.nome_paciente) == 0){
			printf ("\nCódigo do Atendimento: %s\n", at.codigo_atendimento);
			printf ("Código do Agendamento: %s\n", at.codigo_agendamento);
			printf ("Data do Agendamento: %s\n", at.data_agendamento);
			printf ("Nome do Aluno: %s\n", at.nome_aluno);
			printf ("Código do Aluno: %s\n",at.aluno_codigo );
			printf ("Nome do Paciente: %s\n", at.nome_paciente);
			printf ("Código do Paciente: %s\n", at.paciente_codigo);
			printf ("Data do Atendimento: %s\n",at.data_atendimento);
			printf ("Serviço Prestado área do atendimento: %s\n",at.servico_area );
			printf ("Nome do Supervisor: %s\n",at.nome_supervisor );
			printf ("Código do Supervisor: %s\n\n",at.supevisor_codigo);
			printf ("\n\n");
    }
  }
}
   fclose(atendimento_paciente);
   getch();
}

void cancelar_atendimento(){
	FILE* atendimento;
	FILE* atendimentoII;
	char aux[20];
	struct atendimentos at;
	atendimento = fopen ("atendimentos.txt", "rb");
	atendimentoII = fopen ("atendimentosII.txt", "ab");
	if (atendimento == NULL){
		
		printf ("\n\nErro Interior !");
	}
	else{
		printf ("\n\n Digite o código do Atendimento: ");
		fflush (stdin);
		gets (aux);
		while (fread(&at, sizeof(Atendimentos), 1, atendimento) == 1){
			if (strcmp (at.codigo_atendimento, aux) == 1){
				fwrite (&at, sizeof(Atendimentos), 1, atendimentoII);
			}
		}
		fclose (atendimento);
		fclose (atendimentoII);
		system ("cls");
		printf("\n")
		printf ("\n\n Atendimento Cancelado !");
		getch();
		system ("del atendimentos.txt");
		system ("ren atendimentosII.txt atendimentos.txt");
}
}
