#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define LOGIN_MAX 20
#define SENHA_MAX 20

struct usuario_t
{
    char login[64];
    char senha[32];
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
            TelaDeCadastro();
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

void TelaDeLogin()
{

    FILE *fp;
    struct usuario_t usuario;
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
    memset(&usuario, 0, sizeof(struct usuario_t));

    fread(&usuario, sizeof(struct usuario_t), 1, fp);
    fclose(fp);
    if (!strcmp("", usuario.login))
    {
        printf("Nenhum usuário encontrado, abrindo cadastro!\n");
        TelaDeCadastro();
    }
    else
    {
        int tentativas = 0;
        do
        {
            char login[LOGIN_MAX];
            char senha[SENHA_MAX];
            printf("Bem vindo a tela de login! \n\n");
            printf("Login: ");
            scanf("%s", &login);
            printf("Senha: ");
            scanf("%s", &senha);
            if (!strcmp(login, usuario.login) && !strcmp(senha, usuario.senha))
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
    struct usuario_t usuario;
    memset(&usuario, 0, sizeof(struct usuario_t));

    printf("Bem vindo a tela de cadastro! \n\n");
    printf("Login: ");
    scanf("%s", &usuario.login);
    printf("Senha: ");
    scanf("%s", &usuario.senha);

    fp = fopen("login.txt", "a+");
    if (!fp)
    {
        printf("Não foi possível criar o arquivo de login");
        return;
    }
    fwrite(&usuario, sizeof(struct usuario_t), 1, fp);
    fclose(fp);
    printf("Cadastrado com sucesso\n\n");
    printf("Pressione qualquer tecla para ir a tela de login! \n");
    getch();
    system("cls");
    TelaDeLogin();
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