#include<stdio.h>
#include<locale.h>
#include<string.h>
#include <ctype.h>

int input;

//struct {
//
//    char userAdmin1;
//
//    char paswordAdmin1;
//
//}LoginAdmin;
//
//struct {
//
//
//    char userWorker1;
//
//    char paswordWorker1;
//
//
//}LoginFuncionario;
//
//struct {
//
//
//char userSecretary1;
//
//char paswordSecretary1;
//
//
//}LoginSecretaria;

struct{
char user[10];
char password[10];


}Login;

char login1[100];
char senha1[100];
int opcoes;

void main(){

        setlocale(LC_ALL, "Portuguese");
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
        case 0:
            printf("Pressione qualquer tecla para sair!");
            ;
        default:
            printf ("\n\t\t\tOpcao invalida!\n\n");

        }
    }

//    while(input != 0);
//    system("cls");


void TeladeCadastro(){

    printf("\n");
    printf("\n");
    setlocale(LC_ALL, "Portuguese");

    int opcoes;


    printf("Bem vindo a tela de cadastro! \n");
    printf("1 - Digite o Usu�rio \n");
    scanf("%s", &Login.user);
    printf("2 - Digite a senha \n");
    scanf("%s", &Login.password);


    char userAdmin = "admin";
    char passwordAdmin = "admin";

    char userWorker = "worker";
    char passwordWorker = "7lBVTf2avwwTTit";

    char userSecretary = "secretary";
    char passwordSecretary = "QzkCSNN0ieNKOF7";

    printf("%s \n", &Login.user);
    printf("%s \n", &Login.password);
    printf("%s \n", &userAdmin);
    printf("%s \n", &passwordAdmin);

    if (Login.user == userAdmin && userWorker && userSecretary){
    printf("Voc� tentou realizar um cadastro restrito! Tente outros nomes para cadastrar! \n");
    TeladeCadastro();
    }

    if (Login.user && Login.password != userAdmin && passwordAdmin&& userWorker &&
        passwordWorker && userSecretary && userWorker){

            FILE *fptr;

            fptr = fopen("C:\testePim\\singUp.bin","rb");

            if (fptr!=NULL){

            fputs(fptr,"%d",Login.user, Login.password);

            fclose(fptr);
            }

            printf("Voc� realizou seu cadastro com sucesso!! \n");
            getch();
            printf("Digite seu login e senha na pr�xima tela para continuar!\n");
            getch();

   }

    }


void CriarCadastro(){
}

void TeladeLogin(){

    setlocale(LC_ALL, "Portuguese");
    printf("\n");
    printf("\n");

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

        }

       /* if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\nLOGADO!\n\n");
            login_efetuado = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");
            */
    }




    printf("1) - Digite o Usu�rio \n");
    printf("2) - Digite a senha \n");

    printf("Digite a op��o desejada:");
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

    setlocale(LC_ALL, "Portuguese");

                    printf("\n");
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
//         printf("\n\nUsu�rio logado!\n\n");
//        system("cls");
//        TeladeMenu();
//    }
//
//    else
//        printf("\n\nLogin e/ou senha incorretos!\n\n");
//
//}

