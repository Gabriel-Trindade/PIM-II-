#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define LOGIN_MAX 20
#define SENHA_MAX 20

struct LoginFuncionario1
{
    char LoginFuncionario[20];
    char SenhaFuncionario[20];
};

void main() // Tela Inicial
{
    int option2 = 0;
    do
    {
        printf("\n");
        printf("\t\t\t\t  Bem vindo! \n");
        printf("\t\t\t\t  IStorm Imports \n");
        printf("\t\t\t=================================\n");
        printf("\t\t\t|\t                        |\n");
        printf("\t\t\t|\t 1 - Admin              |\n");
        printf("\t\t\t|\t 2 - Secretaria         |\n");
        printf("\t\t\t|\t 3 - Funcionario        |\n");
        printf("\t\t\t|\t 4 - Sair               |\n");
        printf("\t\t\t|\t                        |\n");
        printf("\t\t\t=================================\n");
        printf("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &option2);

        switch (option2)
        {
        case 1:
            system("cls");
            TelaDeAdmin();
            break;
        case 2:
            system("cls");
            TelaDeSecretaria();
            break;
        case 3:
            system("cls");
            TelaDeLogin();
            break;
        case 4:
            exit(0);
        default:
            system("cls");
            printf("\t\t\t\tEscolha 1, 2, 3 ou 4\n");
            break;
        }
    } while (1);

    return 0;
}

void TelaDeAdmin() // Tela de Login do Admin
{
    char adminlogin[15] = "admin";
    char adminlogin2[15];
    char adminsenha[15] = "testeadmin";
    char adminsenha2[15];
    int comparacao, comparacao2;

    printf("***********************\n");
    printf("***  AREA do Admin  ***\n");
    printf("***********************\n\n");
    printf("Login: ");
    scanf("%s", &adminlogin2);
    printf("Senha: ");
    scanf("%s", &adminsenha2);
    system("cls");
    comparacao = strcmp(adminlogin, adminlogin2);
    comparacao2 = strcmp(adminsenha, adminsenha2);

    if (comparacao == 0 && comparacao2 == 0)
    {
        printf("LOGADO COM SUCESSO! \n\n ");
        printf("Pressione qualquer tecla para ir a Area do Admin \n");
        getch();
        system("cls");
        MenuAdmin();
    }
    else
    {
        printf("CADASTRO INVALIDO! \n\n ");
        printf("Pressione qualquer tecla para voltar a tela inicial! \n");
        getch();
        system("cls");
        main();
    }
}

void MenuAdmin() // Menu do Admin
{
    int option3 = 0;
    do
    {
        printf("\n");
        printf("\t\t\t\t  IStorm Imports \n");
        printf("\t\t\t\t  Menu Admin \n");
        printf("\t\t\t====================================\n");
        printf("\t\t\t|\t                           |\n");
        printf("\t\t\t|\t 1 - Cadastrar Funcionario |\n");
        printf("\t\t\t|\t 2 - Checar Produtos       |\n");
        printf("\t\t\t|\t 3 - Gerar Relatorio       |\n");
        printf("\t\t\t|\t 4 - Deslogar              |\n");
        printf("\t\t\t|\t 5 - Sair                  |\n");
        printf("\t\t\t|\t                           |\n");
        printf("\t\t\t====================================\n");
        printf("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &option3);

        switch (option3)
        {
        case 1:
            system("cls");
            TelaDeCadastro();
            break;
        case 2:
            system("cls");
            ChecarProdutos();
            break;
        case 3:
            system("cls");
            GerarRelatorio();
            break;
        case 4:
            system("cls");
            main();
            break;
        case 5:
            exit(0);
        default:
            printf("Escolha 1, 2, 3, 4 ou 5\n");
            system("cls");
            break;
        }
    } while (1);
}

void TelaDeSecretaria() // Tela de Login da Secretaria
{
    char secretarialogin[15] = "secret";
    char secretarialogin2[15];
    char secretariasenha[15] = "secret";
    char secretariasenha2[15];
    int comparacao3, comparacao4;
    printf("****************************\n");
    printf("***  AREA da Secretaria  ***\n");
    printf("****************************\n\n");
    printf("Login: ");
    scanf("%s", &secretarialogin2);
    printf("Senha: ");
    scanf("%s", &secretariasenha2);
    system("cls");
    comparacao3 = strcmp(secretarialogin, secretarialogin2);
    comparacao4 = strcmp(secretariasenha, secretariasenha2);

    if (comparacao3 == 0 && comparacao4 == 0)
    {
        printf("LOGADO COM SUCESSO! \n\n ");
        printf("Pressione qualquer tecla para ir a tela de secretarios! \n");
        getch();
        system("cls");
        MenuSecretaria();
    }
    else
    {
        printf("CADASTRO INVALIDO! \n\n ");
        printf("Pressione qualquer tecla para voltar a tela inicial! \n");
        getch();
        system("cls");
        main();
    }
}

void MenuSecretaria() // Menu da Secretaria
{
    int option4 = 0;
    do
    {
        printf("\n");
        printf("\t\t\t\t  IStorm Imports \n");
        printf("\t\t\t\t  Menu Secretaria \n");
        printf("\t\t\t====================================\n");
        printf("\t\t\t|\t                          |\n");
        printf("\t\t\t|\t 1 - Teste                |\n");
        printf("\t\t\t|\t 2 - Teste                |\n");
        printf("\t\t\t|\t 3 - Teste                |\n");
        printf("\t\t\t|\t 4 - Deslogar             |\n");
        printf("\t\t\t|\t 5 - Sair                 |\n");
        printf("\t\t\t|\t                          |\n");
        printf("\t\t\t====================================\n");
        printf("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &option4);

        switch (option4)
        {
        case 1:
            system("cls");
            TelaDeCadastro();
            break;
        case 2:
            system("cls");
            ChecarPedidos();
            break;
        case 3:
            system("cls");
            TelaDeLogin();
            break;
        case 4:
            system("cls");
            main();
            break;
        case 5:
            exit(0);
        default:
            printf("Escolha 1, 2, 3, 4 ou 5\n");
            system("cls");
            break;
        }
    } while (1);
}

void NaoAchouArquivo()
{

    printf("Nenhum Funcionario cadastrado no sistema\n\n");
    printf("Pressione qualquer tecla para voltar a tela inicial! \n");
    getch();
    system("cls");
    main();

}

int VerifLogin( FILE* file, char* user, char* senha ) //Valida logins
{
	char tmpLogin[LOGIN_MAX];
	char tmpSenha[SENHA_MAX];

	fscanf(file, "%s", tmpLogin);

	while( !feof(file) )
	{
		if( !strcmp(tmpLogin, user))
		{
			fscanf(file, "%s", tmpSenha);

			if( !strcmp(tmpSenha, senha))
				return 1;
		}
		else
		{
			fscanf(file, "%*s");
		}

		fscanf(file, "%s", tmpLogin);
	}

	return 0;
}

void TelaDeLogin() // Tela de Login do Funcionario
{
    FILE *fp;

    struct LoginFuncionario1 Funcionario;

    char LoginFuncionario[LOGIN_MAX];
    char SenhaFuncionario[SENHA_MAX];

        printf("*****************************\n");
        printf("***  AREA do Funcionario  ***\n");
        printf("*****************************\n\n");
        printf("Login: ");
        scanf("%s", &LoginFuncionario);
        printf("Senha: ");
        scanf("%s", &SenhaFuncionario);

        fp = fopen("login.txt", "r");
        if(fp)
        {
            if(VerifLogin(fp, LoginFuncionario, SenhaFuncionario))
        {
            printf("Logado com sucesso!\n\n");
            printf("Pressione qualquer tecla para ir a tela de funcionario! \n");
            getch();
            system("cls");
            TelaDeFuncionarios();
        }
        else {
            printf("Usuario ou senha invalidos!\n\n");
            printf("Pressione qualquer tecla para voltar a tela de menu! \n");
            getch();
            system("cls");
            main();
        }
        }else{
            NaoAchouArquivo();
        }

            fclose(fp);
            free(SenhaFuncionario);

}

void TelaDeCadastro() // Tela de cadastro de funcionario
{

    FILE *fp;
    struct LoginFuncionario1 Funcionario;

    printf("Bem vindo a tela de cadastro de funcionarios! \n\n");
    printf("Login: ");
    scanf("%s", &Funcionario.LoginFuncionario);
    printf("Senha: ");
    scanf("%s", &Funcionario.SenhaFuncionario);

    fp = fopen("login.txt", "a+");
    if (!fp)
    {
        printf("N�o foi poss�vel criar o arquivo de login");
        return;
    }
    fprintf(fp, "%s %s\n", Funcionario.LoginFuncionario,Funcionario.SenhaFuncionario );
    fclose(fp);
    printf("Cadastrado com sucesso\n\n");
    printf("Pressione qualquer tecla para ir a tela de login! \n");
    getch();
    system("cls");
    MenuAdmin();
}

void TelaDeFuncionarios() // Menu dos Funcionarios
{
    int input2;

    do
    {
        printf("\n");
        printf("\t\t\t\t  Tela de Funcionarios \n");
        printf("\t\t\t\t  IStorm Imports \n");
        printf("\t\t\t===============================\n");
        printf("\t\t\t|\t                         |\n");
        printf("\t\t\t|\t 1 - Realizar Pedidos    |\n");
        printf("\t\t\t|\t 2 - Ver Pedidos         |\n");
        printf("\t\t\t|\t 3 - Deslogar            |\n");
        printf("\t\t\t|\t 3 - Sair                |\n");
        printf("\t\t\t|\t                         |\n");
        printf("\t\t\t===============================\n");
        printf("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &input2);

        switch (input2)
        {
        case 1:
            system("cls");
            RealizarPedidos();
            break;
        case 2:
            system("cls");
            VerPedidos();
            break;
        case 3:
            system("cls");
            main();
            break;
        case 4:
            exit(0);
        default:
            printf("Escolha 1, 2 ou 3\n");
            break;
        }

    } while (1);
}
void RealizarPedidos() // Realiza Pedidos
{
    printf("Realizar Pedidos\n");
    printf("Pressione qualquer tecla! \n");
    getch();
    system("cls");
    TelaDeFuncionarios();
}

void VerPedidos() // Ver pedidos
{
    printf("VER PEDIDOS\n");
    printf("PEDIDOS VISTOS\n\n");
    printf("Pressione qualquer tecla! \n");
    getch();
    system("cls");
    TelaDeFuncionarios();
}

void ChecarPedidos()
{
    printf("CHECAR PEDIDOS\n");
    printf("PEDIDOS VISTOS\n\n");
    printf("Pressione qualquer tecla! \n");
    getch();
    system("cls");
    MenuAdmin();
}

void GerarRelatorio() // Gera relatorio
{
    printf("GERAR RELATORIO\n");
    printf("Pressione qualquer tecla! \n");
    getch();
    system("cls");
    MenuAdmin();
}

void ChecarProdutos()
{
    printf("Checar Produtos\n");
    printf("Pressione qualquer tecla! \n");
    getch();
    system("cls");
    MenuAdmin();
}

//!strcmp(LoginFuncionario, Funcionario.LoginFuncionario) && !strcmp(SenhaFuncionario, Funcionario.SenhaFuncionario
