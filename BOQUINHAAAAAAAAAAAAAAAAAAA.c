#include<stdio.h>
#include<locale.h>
#include<string.h>
#include <ctype.h>

int input;

struct {

    char userAdmin1[15];

    char paswordAdmin1[15];

}LoginAdmin;

struct {


    char userWorker1[15];

    char paswordWorker1[15];


}LoginFuncionario;

struct {


char userSecretary1[15];

char paswordSecretary1[15];


}LoginSecretaria;

struct{
char user[10];
char password[10];


}Login;

char login1[100];
char senha1[100];
int opcoes;

void main(){


            printf("\n");
        printf ("\t\t\t\t  Bem vindo! \n");
        printf ("\t\t\t\t  IStorm Imports \n");
        printf ("\t\t\t===============================\n");
        printf ("\t\t\t|\t                      |\n");
        printf("\t\t\t|\t 1 - Realizar Cadastro        |\n");
        printf("\t\t\t|\t 2 - Realizar Login         |\n");
        printf("\t\t\t|\t 0 - Sair             |\n");
        printf ("\t\t\t|\t                      |\n");
        printf ("\t\t\t===============================\n");
        printf ("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &opcoes);

        switch(opcoes)
        {
        case 1:
            TeladeCadastro();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 0:
            ;
        default:
            printf ("\n\t\t\tOpcao invalida!\n\n");

        }
    }

//    while(input != 0);
//    system("cls");


void TeladeCadastro(){




    int opcoes;


    printf("Bem vindo a tela de cadastro! \n");
    printf("1 - Digite o Usuário \n");
    scanf("%s", &Login.user);
    printf("2 - Digite a senha \n");
    scanf("%s", &Login.password);
    printf("0 - Voltar a tela inicial");
    printf("Digite a opção desejada:");
    scanf("%d", &opcoes);

    switch (opcoes){
    case 0:
    main();
    break;
    case 1:
        CriarCadastro();
    default:
            printf ("\n\t\t\tOpcao invalida!\n\n");

    }


}

void CriarCadastro(){

    char userAdmin[15] = "admin";
    char passwordAdmin[15] = "admin";

    char userWorker[15] = "worker";
    char passwordWorker[15] = "7lBVTf2avwwTTit";

    char userSecretary[15] = "secretary";
    char passwordSecretary[15] = "QzkCSNN0ieNKOF7";


if (Login.user == userAdmin && userWorker && userSecretary){
    Printf("Você tentou realizar um cadastro restrito! Tente outros nomes para cadastrar! \n");
    getch();
    TeladeCadastro();
    }

    if (Login.user && Login.password != userAdmin && passwordAdmin&& userWorker &&
        passwordWorker && userSecretary && userWorker){

            FILE *fptr;

            fopen("C:\\testePim\\singUp.bin","rb");

            fprintf(fptr,"%d",Login.user);

            fprintf(fptr,"%d",Login.password);

            printf("Você realizou seu cadastro com sucesso!!");
            getch();
            printf("Digite seu login e senha na próxima tela para continuar!");
            getch();
            TeladeLogin();
   }
}

void TeladeLogin(){
int efetuado = 0;

while(!efetuado){
        printf("Digite o Login: ");
        scanf("%s", login1);

        printf("Digite a Senha: ");
        scanf("%s", senha1);

        printf("0 - Voltar a tela inicial");


        switch (opcoes) {
            case 0:
            main();
            break;
        default:
            printf ("\n\t\t\tOpcao invalida!\n\n");
            fflush(stdin);
        }

       /* if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\nLOGADO!\n\n");
            login_efetuado = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");
            */
    }




    printf("1) - Digite o Usuário \n");
    printf("2) - Digite a senha \n");

    printf("Digite a opção desejada:");
    scanf("%d", &opcoes);

    switch (opcoes){
    case 0:
    main();
    break;
    default:
            printf ("\n\t\t\tOpcao invalida!\n\n");
            fflush(stdin);
    }

}

void TeladeCliente(){
                    printf("\n");

        printf ("\t\t\t\t  IStorm Imports \n");
        printf ("\t\t\t===============================\n");
        printf ("\t\t\t|\t                      |\n");
        printf("\t\t\t|\t 1 - Realizar Pedido   |\n");
        printf("\t\t\t|\t 2 - Pagar Pedido  |\n");

        printf("\t\t\t|\t 0 - Sair             |\n");
        printf ("\t\t\t|\t                      |\n");
        printf ("\t\t\t===============================\n");
        printf ("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        fflush(stdin);
        scanf("%d", &input);
        system("cls");
        switch(input)
        {
        case 1:
            TeladeLogin();
            break;
        case 2:
            break;
        case 0:
            //exit(EXIT_SUCCESS);
        default:
            printf ("\n\t\t\tOpcao invalida!\n\n");
            fflush(stdin);
        }
    }








//    setlocale(LC_ALL, "Portuguese");
//
//    printf("Tela de Login\n\n");
//    printf("Digite o Login:");
//    scanf("%s", login1);
//
//    printf("Digite a Senha:");
//    scanf("%s", senha1);
//
//    if(strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0)
//    {
//         printf("\n\nUsuário logado!\n\n");
//        system("cls");
//        TeladeMenu();
//    }
//
//    else
//        printf("\n\nLogin e/ou senha incorretos!\n\n");
//
//}

