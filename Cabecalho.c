
#include <stdio.h>
#include<string.h>


int menu(){
	int op;
	system("cls");
	system("color 3e");
	printf ("\t\t|||=========================================|||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||             [M] [E] [N] [U]             |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||            [1]- Atendimento             |||\n");
	printf ("\t\t|||            [2]- Agendamento             |||\n");
	printf ("\t\t|||            [3]- Aluno                   |||\n");
	printf ("\t\t|||            [4]- Paciente                |||\n");
	printf ("\t\t|||            [5]- Supervisor              |||\n");
	printf ("\t\t|||            [6]- Sair                    |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
	scanf("&d",&op);
	return op;
}

int menu_paciente(){
	int op;
	system ("cls");
	system("color 7e");
	printf ("\t\t|||=========================================|||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||     [P] [A] [C] [I] [E] [N] [T] [E]     |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||          [1]- Cadastrar                 |||\n");
	printf ("\t\t|||          [2]- Remover                   |||\n");
	printf ("\t\t|||          [3]- Listar                    |||\n");
	printf ("\t\t|||          [4]- Editar                    |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
	scanf("%d", &op);
	return op;
}



int menu_aluno(){
	int op;
	system("cls");
	system("color 7e");
	printf ("\t\t|||=========================================|||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||         [A] [L] [U] [N] [O]             |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||        [1]- Cadastrar                   |||\n");
	printf ("\t\t|||        [2]- Remover                     |||\n");
	printf ("\t\t|||        [3]- Listar                      |||\n");
	printf ("\t\t|||        [4]- Editar                      |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
	scanf("%d", &op);
	return op;
}


int menu_supervisor(){
	int op;
	system("cls");
	system("color 7e");
	printf ("\t\t|||=========================================|||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t||| [S] [U] [P] [E] [R] [V] [I] [S] [O] [R] |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||         [1]- Cadastrar                  |||\n");
	printf ("\t\t|||         [2]- Remover                    |||\n");
	printf ("\t\t|||         [3]- Listar                     |||\n");
	printf ("\t\t|||         [4]- Editar                     |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
	scanf("%d", &op);
	return op;
}


int menu_atendimento_listar(){
    int op;
	system("cls");
	system("color 7e");
	printf ("\t\t|||=========================================|||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||            [M] [E] [N] [U]              |||\n");
	printf ("\t\t|||     [A][T][E][N][D][I][M][E][N][T][O]   |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||         [1]- Criar Atendimento          |||\n");
	printf ("\t\t|||         [2]- Listar Atendimentos        |||\n");
	printf ("\t\t|||         [3]- Listar por Área            |||\n");
	printf ("\t\t|||         [4]- Listar por Aluno           |||\n");
	printf ("\t\t|||         [5]- Listar por Paciente        |||\n");
	printf ("\t\t|||         [6]- Remover Atendimento        |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
	scanf("%d", &op);
	return op;
}


int menu_agendamento(){
	int op;
	system("cls");
	system("color 7e");
	printf ("\t\t|||=========================================|||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||             [M] [E] [N] [U]             |||\n");
	printf ("\t\t|||      [A][G][E][N][D][A][M][E][N][T][O]  |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||         [1]- Criar Novo Agendamento     |||\n");
	printf ("\t\t|||         [2]- Cancelar Agendamento       |||\n");
	printf ("\t\t|||         [3]- Listar Agendamento         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
	scanf("%d", &op);
	return op;
}


int menu_remover_aluno(){
	int op;
	system("cls");
	system("color 7e");
	printf ("\t\t|||=========================================|||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||       [R] [E] [M] [O] [V] [E] [R]       |||\n");
	printf ("\t\t|||          [A] [L] [U] [N] [O]            |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||         [1]- Remover Todos              |||\n");
	printf ("\t\t|||         [2]- Remover Um Específico      |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
	scanf("%d", &op);
	return op;
}




int menu_remover_pacientes(){
	int op;
	system("cls");
	system("color 7e");
	printf ("\t\t|||=========================================|||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||       [R] [E] [M] [O] [V] [E] [R]       |||\n");
	printf ("\t\t|||     [P] [A] [C] [I] [E] [N] [T] [E]     |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||         [1]- Remover Todos              |||\n");
	printf ("\t\t|||         [2]- Remover Um Específico      |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
	scanf("%d", &op);
	return op;
}

int menu_remover_supervisor(){
	int op;
	system("cls");
	system("color 7e");
	printf ("\t\t|||=========================================|||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||       [R] [E] [M] [O] [V] [E] [R]       |||\n");
	printf ("\t\t||| [S] [U] [P] [E] [R] [V] [I] [S] [O] [R] |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||         [1]- Remover Todos              |||\n");
	printf ("\t\t|||         [2]- Remover Um Específico      |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||                                         |||\n");
	printf ("\t\t|||=========================================|||\n\n");
	scanf("%d", &op);
	return op;
}




