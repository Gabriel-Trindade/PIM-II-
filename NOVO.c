#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define LOGIN_MAX 20
#define SENHA_MAX 20

struct LoginFuncionario
{
    char LoginFuncionario[20];
    char SenhaFuncionario[20];
};

int main(int argc, char *argv[])
{
    int option = 0;
    do
    {
        printf("\n");
        printf("\t\t\t\t  Bem vindo! \n");
        printf("\t\t\t\t  Tela de Menu Inicial \n");
        printf("\t\t\t\t  IStorm Imports \n");
        printf("\t\t\t=================================\n");
        printf("\t\t\t|\t                        |\n");
        printf("\t\t\t|\t 1 - Realizar Cadastro  |\n");
        printf("\t\t\t|\t 2 - Realizar Login     |\n");
        printf("\t\t\t|\t 3 - Sair               |\n");
        printf("\t\t\t|\t                        |\n");
        printf("\t\t\t=================================\n");
        printf("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            system("cls");
            TelaDeAdmin();
            break;
        case 2:
            system("cls");
            TelaDeLogin();
            break;
        case 3:
            exit(0);
        default:
            printf("Escolha 1, 2 ou 3\n");
            break;
        }

    } while (1);

    return 0;
}

void TelaDeAdmin()
{
    char adminlogin[15] = "admin";
    char adminlogin2[15];
    char adminsenha[15] = "testeadmin";
    char adminsenha2[15];
    int comparacao, comparacao2;

    printf("Login: ");
    scanf("%s",&adminlogin2);
    printf("Senha: ");
    scanf("%s",&adminsenha2);
    system("cls");
    comparacao = strcmp(adminlogin,adminlogin2);
    comparacao2 = strcmp(adminsenha,adminsenha2);

    if (comparacao == 0 && comparacao2 ==0)
    {
        system("cls");
        TelaDeCadastro();
    }
    else
    {
        printf("CADASTRO INVALIDO! \n\n ");
        printf("Pressione qualquer tecla para voltar a tela inicial! \n");
        getch();
        system("cls");
        int main(int argc, char *argv[]);
    }

}

void TelaDeSecretaria()
{
    char loginsecretaria[15] = "secretaria";
    char loginsecretaria2[15];
    char senhasecretaria[15] = "testesecretaria";
    char senhasecretaria2[15];
    int comparacao3, comparacao4;

    printf("AREA RESTRITA! \n\n");
    printf("Login: ");
    scanf("%s",&loginsecretaria2);
    printf("Senha: ");
    scanf("%s",&senhasecretaria2);
    system("cls");
    comparacao3 = strcmp(loginsecretaria,loginsecretaria2);
    comparacao4 = strcmp(senhasecretaria,senhasecretaria2);

    if (comparacao3 == 0 && comparacao4 ==0)
    {
        system("cls");
        TelaDeFuncionarios();
    }
    else
    {
        printf("CADASTRO INVALIDO! \n\n ");
        printf("Pressione qualquer tecla para voltar a tela inicial! \n");
        getch();
        system("cls");
        int main(int argc, char *argv[]);
    }

}

void TelaDeLogin()
{

    FILE *fp;
    struct LoginFuncionario Funcionario;
    fp = fopen("login.txt", "a+");
    if (!fp)
    {
        TelaDeCadastro();
        fp = fopen("login.txt", "a+");
        if (!fp)
        {
            printf("Não foi possivel encontrar o arquivo de login\n");
            return 0;
        }
    }
    memset(&Funcionario, 0, sizeof(struct LoginFuncionario));

    fread(&Funcionario, sizeof(struct LoginFuncionario), 1, fp);
    fclose(fp);
    if (!strcmp("", Funcionario.LoginFuncionario))
    {
        printf("Nenhum usuário encontrado, abrindo cadastro!\n");
        TelaDeCadastro();
    }
    else
    {
        int tentativas = 0;
        do
        {
            char LoginFuncionario[LOGIN_MAX];
            char SenhaFuncionario[SENHA_MAX];
            char confirm;

            printf("Bem vindo a tela de login! \n\n");
            printf("Quer realizar o login? (S/N): \n");
            scanf("%s", &confirm);
            if (confirm == "N" || confirm == "n")
            {
                system("cls");
                printf("Teste Feito");
            }
            if (confirm == "S" || confirm == "s")
            {
                printf("Login: ");
                scanf("%s", &LoginFuncionario);
                printf("Senha: ");
                scanf("%s", &SenhaFuncionario);
                if (!strcmp(LoginFuncionario, Funcionario.LoginFuncionario) && !strcmp(SenhaFuncionario, Funcionario.SenhaFuncionario))
                {
                    printf("Logado com sucesso!\n\n");
                    printf("Pressione qualquer tecla para ir a tela de cliente! \n");
                    getch();
                    system("cls");
                    TelaDeCliente();
                    return 1;
                }
                else
                {
                    printf("Usuário ou senha invalidos!\n\n");
                    tentativas++;
                }
            }
        } while (tentativas < 3);
            printf("Numero maximo de tentativas alcançado!\n\n");
            printf("Pressione qualquer tecla para voltar a tela principal! \n");
            getch();
            system("cls");
            return 0;
    }

    return 0;
}

void TelaDeCadastro()
{

    FILE *fp;
    struct LoginFuncionario Funcionario;
    memset(&Funcionario, 0, sizeof(struct LoginFuncionario));

    printf("Bem vindo a tela de cadastro! \n\n");
    printf("Login: ");
    scanf("%s", &Funcionario.LoginFuncionario);
    printf("Senha: ");
    scanf("%s", &Funcionario.SenhaFuncionario);

    fp = fopen("login.txt", "a+");
    if (!fp)
    {
        printf("Não foi possível criar o arquivo de login");
        return;
    }
    fwrite(&Funcionario, sizeof(struct LoginFuncionario), 1, fp);
    fclose(fp);
    printf("Cadastrado com sucesso\n\n");
    printf("Pressione qualquer tecla para ir a tela de login! \n");
    getch();
    system("cls");
    TelaDeLogin();
}

void TelaDeFuncionarios()
{
    int input2;

    do
    {
        printf("\n");
        printf("\t\t\t\t  Tela de Funcionarios \n");
        printf("\t\t\t\t  IStorm Imports \n");
        printf("\t\t\t===============================\n");
        printf("\t\t\t|\t                      |\n");
        printf("\t\t\t|\t 1 - Ver Pedidos      |\n");
        printf("\t\t\t|\t 2 - Ver Pedidos2     |\n");
        printf("\t\t\t|\t 3 - Sair             |\n");
        printf("\t\t\t|\t                      |\n");
        printf("\t\t\t===============================\n");
        printf("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &input2);

        switch (input2)
        {
        case 1:
            system("cls");
            VerPedidos();
            break;
        case 2:
            system("cls");
            VerPedidos2();
            break;
        case 3:
            exit(0);
        default:
            printf("Escolha 1, 2 ou 3\n");
            break;
        }

    } while (1);


}
void VerPedidos()
{
    printf("VER PEDIDOS\n");
    printf("PEDIDOS VISTOS\n\n");
    printf("Pressione qualquer tecla! \n");
    getch();
    system("cls");
    TelaDeFuncionarios();
}

void VerPedidos2()
{
    printf("VER PEDIDOS\n");
    printf("PEDIDOS VISTOS\n\n");
    printf("Pressione qualquer tecla! \n");
    getch();
    system("cls");
    TelaDeFuncionarios();
}



void TelaDeCliente()
{

    int input;

    do
    {
        printf("\n");
        printf("\t\t\t\t  Tela de Cliente \n");
        printf("\t\t\t\t  IStorm Imports \n");
        printf("\t\t\t===============================\n");
        printf("\t\t\t|\t                      |\n");
        printf("\t\t\t|\t 1 - Realizar Pedido  |\n");
        printf("\t\t\t|\t 2 - Pagar Pedido     |\n");
        printf("\t\t\t|\t 3 - Sair             |\n");
        printf("\t\t\t|\t                      |\n");
        printf("\t\t\t===============================\n");
        printf("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            system("cls");
            RealizarPedido();
            break;
        case 2:
            system("cls");
            PagarPedido();
            break;
        case 3:
            exit(0);
        default:
            printf("Escolha 1, 2 ou 3\n");
            break;
        }

    } while (1);
}

void RealizarPedido()
{
    printf("REALIZAR PEDIDO\n");
    printf("PEDIDO FEITO COM SUCESSO\n\n");
    printf("Pressione qualquer tecla! \n");
    getch();
    system("cls");
    TelaDeCliente();
}

void PagarPedido()
{
    printf("PAGAR PEDIDO\n");
    printf("PAGAMENTO FEITO COM SUCESSO\n\n");
    printf("Pressione qualquer tecla! \n");
    getch();
    system("cls");
    TelaDeCliente();
}
