#include <stdio.h>
#include <stdlib.h>
#include <time.h> // necess�rio para usar a srand
#include <locale.h>// necess�rio para a fun��o de LC_ALL
#include <unistd.h> // necess�rio para usar a fun��o sleep()
typedef struct no{
        char item;  //int value;
        struct no *next;
}No;

typedef struct{
        No *top;
        int size;
}Pilha;

void pile(Pilha *p, int x){
    No *no = malloc(sizeof(No));
    no -> item = x;
    no -> next = p->top;
    p->top = no;
}

/* opera��o pop
    retorna o topo da pilha ou NULL
*/

No* stacked (Pilha *p){
    No *no = NULL;
    if(p->top){
        no = p->top;
        p->top = no->next;
    }
    return no;
}
void print(No *no){
    if(no) {
        printf("%c\n", no->item);
        print(no->next);
    }
}

void jog1_wins()
{
    printf("*  ######   #####    #####    #####   ######    #####   ######               ##             ### ###  #######  ##  ###   #####   #######  ### ### *\n");
    printf("*    ###   ### ###  ###  ##  ### ###  ### ###  ### ###  ### ###             ###             ### ###  ### ###  ### ###  ### ###  ### ###  ### ### *\n");
    printf("*    ###   ### ###  ###      ### ###  ### ###  ### ###  ### ###            ####             ### ###  ###      #######  ###      ###      ### ###*\n");
    printf("*    ###   ### ###  ### ###  #######  ### ###  ### ###  ######               ##             ### ###  #####    #######  ###      #####    ### ### *\n");
    printf("*    ###   ### ###  ###  ##  ### ###  ### ###  ### ###  ### ##               ##             ### ###  ###      ### ###  ###      ###      ### ###*\n");
    printf("* ## ###   ### ###  ###  ##  ### ###  ### ###  ### ###  ### ###              ##              #####   ### ###  ### ###  ### ###  ### ###  ### ###*\n");
    printf("*  #####    #####    #####   ### ###  ######    #####   ### ###            ######             ###    #######  ### ###   #####   #######   ##### *\n");
}

void jog2_wins()
{
    printf("*  ######   #####    #####    #####   ######    #####   ######             #####            ### ###  #######  ##  ###   #####   #######  ### ### *\n");
    printf("*    ###   ### ###  ###  ##  ### ###  ### ###  ### ###  ### ###           ##   ##           ### ###  ### ###  ### ###  ### ###  ### ###  ### ### *\n");
    printf("*    ###   ### ###  ###      ### ###  ### ###  ### ###  ### ###               ###           ### ###  ###      #######  ###      ###      ### ### *\n");
    printf("*    ###   ### ###  ### ###  #######  ### ###  ### ###  ######               ###            ### ###  #####    #######  ###      #####    ### ### *\n");
    printf("*    ###   ### ###  ###  ##  ### ###  ### ###  ### ###  ### ##              ###             ### ###  ###      ### ###  ###      ###      ### ### *\n");
    printf("* ## ###   ### ###  ###  ##  ### ###  ### ###  ### ###  ### ###            ###               #####   ### ###  ### ###  ### ###  ### ###  ### ### *\n");
    printf("*  #####    #####    #####   ### ###  ######    #####   ### ###           #######             ###    #######  ### ###   #####   #######   ##### *\n");
}
void game()
{
 int number;
 int turn = 0;
 int cont_empilhadas1 = 0;
 int cont_empilhadas2 = 0;
 int random_number1, random_number2;
 char item = 'X';
 No *no; Pilha p; p.size = 0; p.top = NULL;
 while(cont_empilhadas1 !=3 && cont_empilhadas2 !=3){
   if (turn % 2 == 0)
            {
                printf("JOGADOR 1, TENTE ACERTAR UM N�MERO ALEAT�RIO DE 1 A 5 PARA PODER AVAN�AR NA CONQUISTA \n");
                printf("\n\n\n");
                printf("PASSE DA CORDENADA 3 EM DIRE��O A BAIXO PARA VENCER O JOGO!\n");
                 if(cont_empilhadas1 == 0 && cont_empilhadas2 == 0){
                 printf("\n ---------3----------\n");

                 printf("\n ---------2----------\n");

                 printf("\n ---------1----------\n");

                 printf("\n ---------%c----------\n", item);

                 printf("\n ---------3----------\n");

                 printf("\n ---------2----------\n");

                 printf("\n ---------1----------\n");}

                    if(cont_empilhadas1==1)
                    {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");


                    }
                    if(cont_empilhadas1==2)
                    {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------3----------\n");
                    }
                    if(cont_empilhadas1==3)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                                     print(p.top);
                        }
                    if(cont_empilhadas2==1)
                     {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                     }
                    if(cont_empilhadas2==2)
                     {
                        printf("\n ---------3----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                     }
                    if(cont_empilhadas2==3)
                        {
                                    print(p.top);
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");

                        }

                srand(time(NULL));
                random_number1 = rand() % 5 + 1;
                printf("DIGITE UM N�MERO: \n");

                scanf("%d", &number);

                if (number == random_number1)
                {
                    printf("JOGADOR 1, VOC� ACERTOU O N�MERO ALEAT�RIO! \n");
                    no = stacked(&p);
                    pile(&p, item);
                    cont_empilhadas1++;
                    cont_empilhadas2--;

                    if(cont_empilhadas1==1)
                    {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");


                    }
                    if(cont_empilhadas1==2)
                    {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------3----------\n");
                    }
                    if(cont_empilhadas1==3)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                                     print(p.top);


                        jog1_wins();
                        break;}
                    if(cont_empilhadas2==1)
                     {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                     }
                    if(cont_empilhadas2==2)
                     {
                        printf("\n ---------3----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                     }
                    if(cont_empilhadas2==3)
                        {
                                    print(p.top);
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");}

                        int intervalo_tempo1 = 3; // intervalo de tempo em segundos
                        sleep(intervalo_tempo1); // pausa por um intervalo de tempo
                        system("cls");}
                else
                {
                    printf("VOC� ERROU O N�MERO ALEAT�RIO,O N�MERO CERTO ERA %d\n", random_number1);
                    printf("\n");
                    int intervalo_tempo1 = 3; // intervalo de tempo em segundos
                    sleep(intervalo_tempo1); // pausa por um intervalo de tempo
                    system("cls");

                   // if (no)
                    //{


                       // printf("|%d|\n", no->item);
                       // printf("\n---------PILHA DO PLAYER 1----------\n");
                       // print(p.top);
                       // printf("------------PILHA DO PLAYER 1-----------\n");
                   // }
                }
                turn++;
              }


    else
                {
                printf("JOGADOR 2, TENTE ACERTAR UM N�MERO ALEAT�RIO DE 1 A 5 PARA PODER AVAN�AR NA CONQUISTA \n");
                printf("\n\n\n");
                printf("PASSE DA CORDENADA 3 EM DIRE��O A CIMA PARA VENCER O JOGO!\n");
                 if(cont_empilhadas1==0 && cont_empilhadas2==0){

                 printf("\n ---------3----------\n");

                 printf("\n ---------2----------\n");

                 printf("\n ---------1----------\n");

                 printf("\n ---------%c----------\n", item);

                 printf("\n ---------3----------\n");

                 printf("\n ---------2----------\n");

                 printf("\n ---------1----------\n");}

                   if(cont_empilhadas2==1)
                     {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                     }
                    if(cont_empilhadas2==2)
                     {
                        printf("\n ---------3----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                     }
                    if(cont_empilhadas2==3)
                        {
                                    print(p.top);
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");

                        }
                    if(cont_empilhadas1==1)
                    {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");


                    }
                    if(cont_empilhadas1==2)
                    {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------3----------\n");
                    }
                    if(cont_empilhadas1==3)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                                     print(p.top);
                        }

                 srand(time(NULL));
                 random_number2 = rand () % 5 + 1;
                 printf("DIGITE UM N�MERO: \n");
                 scanf("%d", &number);

                if (number == random_number2)
                {
                    printf("JOGADOR 2, VOC� ACERTOU O N�MERO ALEAT�RIO! \n");
                    no = stacked(&p);
                    pile(&p, item);
                    cont_empilhadas2++;
                    cont_empilhadas1--;

                    if(cont_empilhadas1==1)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");}
                    if(cont_empilhadas1==2)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------3----------\n");}

                    if(cont_empilhadas1==3)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");
                                     print(p.top);}

                    if(cont_empilhadas2==1)
                        {
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");
                                    print(p.top);
                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");}

                    if(cont_empilhadas2==2)
                        {
                        printf("\n ---------3----------\n");
                                    print(p.top);
                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");}
                    if(cont_empilhadas2==3)
                        {
                                    print(p.top);
                        printf("\n ---------3----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------0----------\n");

                        printf("\n ---------1----------\n");

                        printf("\n ---------2----------\n");

                        printf("\n ---------3----------\n");


                        jog2_wins();
                        break;}
                    int intervalo_tempo2 = 3; // intervalo de tempo em segundos
                    sleep(intervalo_tempo2); // pausa por um intervalo de tempo
                    system("cls");}

                else
                {
                    printf("VOC� ERROU O N�MERO ALEAT�RIO,O N�MERO CERTO ERA %d\n", random_number2);
                    printf("\n");
                    int intervalo_tempo2 = 3; // intervalo de tempo em segundos
                    sleep(intervalo_tempo2); // pausa por um intervalo de tempo
                    system("cls");

                }
             turn++;
            }
                }
        }

menu(){
printf("                 #####  ####### #     #  #####  #     # ###  #####  #######    #       ######  #######  \n");
printf("                #     # #     # ##    # #     # #     #  #  #     #    #      # #      #     # #        \n");
printf("                #       #     # # #   # #     # #     #  #  #          #     #   #     #     # #        \n");
printf("                #       #     # #  #  # #     # #     #  #   #####     #    #     #    #     # #####    \n");
printf("                #       #     # #   # # #   # # #     #  #        #    #    #######    #     # #        \n");
printf("                #     # #     # #    ## #    #  #     #  #  #     #    #    #     #    #     # #        \n");
printf("                 #####  ####### #     #  #### #  #####  ###  #####     #    #     #    ######  #######  \n");
printf("\n\n");
printf("                                                                      #                      \n");
printf("                                                                     #                       \n");
printf("                    ####### ####### ######  ######  ### ####### ####### ######  ### #######  \n");
printf("                       #    #       #     # #     #  #     #    #     # #     #  #  #     #  \n");
printf("                       #    #       #     # #     #  #     #    #     # #     #  #  #     #  \n");
printf("                       #    #####   ######  ######   #     #    #     # ######   #  #     #  \n");
printf("                       #    #       #   #   #   #    #     #    #     # #   #    #  #     #  \n");
printf("                       #    #       #    #  #    #   #     #    #     # #    #   #  #     #  \n");
printf("                       #    ####### #     # #     # ###    #    ####### #     # ### #######  \n");

int menu_tempo1 = 5; // intervalo de tempo em segundos
sleep(menu_tempo1); // pausa por um intervalo de tempo
system("cls");



printf("              #          #####     #    ### ######      #####              # #######  #####     #    ######   \n");
printf("             ##         #     #   # #    #  #     #    #     #             # #     # #     #   # #   #     #  \n");
printf("            # #         #        #   #   #  #     #          #             # #     # #        #   #  #     #  \n");
printf("              #   #####  #####  #     #  #  ######      #####  #####       # #     # #  #### #     # ######   \n");
printf("              #               # #######  #  #   #      #             #     # #     # #     # ####### #   #    \n");
printf("              #         #     # #     #  #  #    #     #             #     # #     # #     # #     # #    #   \n");
printf("            #####        #####  #     # ### #     #    #######        #####  #######  #####  #     # #     #  \n");
printf("\n\n");
printf("\n\n");
printf("             #####         #####  ####### #     # #######          # #######  #####     #    ######   \n");
printf("             #     #      #     # #     # ##   ## #     #          # #     # #     #   # #   #     #  \n");
printf("                  #       #       #     # # # # # #     #          # #     # #        #   #  #     #  \n");
printf("             #####  ##### #       #     # #  #  # #     #          # #     # #  #### #     # ######   \n");
printf("                  #       #       #     # #     # #     #    #     # #     # #     # ####### #   #     \n");
printf("             #     #      #     # #     # #     # #     #    #     # #     # #     # #     # #    #   \n");
printf("             #####         #####  ####### #     # #######     #####  #######  #####  #     # #     #  \n");
}

carregando(){

printf("                 #####     #    ######  ######  #######  #####     #    #     # ######  #######              \n");
printf("                #     #   # #   #     # #     # #       #     #   # #   ##    # #     # #     #              \n");
printf("                #        #   #  #     # #     # #       #        #   #  # #   # #     # #     #              \n");
printf("                #       #     # ######  ######  #####   #  #### #     # #  #  # #     # #     #              \n");
printf("                #       ####### #   #   #   #   #       #     # ####### #   # # #     # #     # ### ### ###  \n");
printf("                #     # #     # #    #  #    #  #       #     # #     # #    ## #     # #     # ### ### ###  \n");
printf("                 #####  #     # #     # #     # #######  #####  #     # #     # ######  ####### ### ### ###  \n");

int loading_time = 3; // intervalo de tempo em segundos
sleep(loading_time); // pausa por um intervalo de tempo
system("cls");

}

sair(){
printf(" #####     #    ### #     # ######  #######              \n");
printf("#     #   # #    #  ##    # #     # #     #              \n");
printf("#        #   #   #  # #   # #     # #     #              \n");
printf(" #####  #     #  #  #  #  # #     # #     #              \n");
printf("      # #######  #  #   # # #     # #     # ### ### ###  \n");
printf("#     # #     #  #  #    ## #     # #     # ### ### ###  \n");
printf(" #####  #     # ### #     # ######  ####### ### ### ###  \n");


}

howtoplay(){
printf("\t\t COMO JOGAR \n");
printf("\n\n");
printf(" CONQUISTA DE TERRIT�RIO � UM JOGO SIMPLES, PARA \n SE VENCER BASTA ATRAVESSAR A CORDENADA N�MERO 3\n(BAIXO PARA JOGADOR 1 E CIMA PARA JOGADOR 2). PARA \n CHEGAR AT� ESSAS CORDENADAS O JOGADOR DEVE CONQUISTAR \n AS CORDENADAS ANTERIORES(1,2,3) DE SUAS RESPECTIVAS DIRE��ES.\n\n");
printf("\n");

 char item = 'X';
                 printf("\n ---------3---------- CORDENADAS DO JOGADOR 2\n");

                 printf("\n ---------2---------- CORDENADAS DO JOGADOR 2\n");

                 printf("\n ---------1---------- CORDENADAS DO JOGADOR 2\n");

                 printf("\n ---------%c---------- ZONA NEUTRA\n", item);

                 printf("\n ---------1---------- CORDENADAS DO JOGADOR 1\n");

                 printf("\n ---------2---------- CORDENADAS DO JOGADOR 1\n");

                 printf("\n ---------3---------- CORDENADAS DO JOGADOR 1\n\n");


printf(" AS CORDENADAS S�O CONQUISTADAS QUANDO O JOGADOR \n DA VEZ ACERTA O N�MERO ALEAT�RIO, FAZENDO ASSIM\n COM QUE O MESMO AVANCE UMA CORDENADA E ASSIM PAS  \n SANDO A VEZ PARA O PR�XIMO JOGADOR, O JOGADOR TAMB�M \n PASSAR� A VEZ CASO ERRE O N�MERO ALEAT�RIO.\n ");
printf("QUANDO UM JOGADOR ACERTA O N�MERO E CONQUISTA   \n UMA DETERMINADA CORDENADA O SEU ADVERS�RIO PODE\n FAZER ELE REGREDIR DE CORDENADA CASO ACERTE O N�- \n MERO EM SUA VEZ. \n\n");

                 printf("\n ---------3---------- CORDENADAS DO JOGADOR 2    ---------3---------- CORDENADAS DO JOGADOR 2\n");

                 printf("\n ---------2---------- CORDENADAS DO JOGADOR 2    ---------2---------- CORDENADAS DO JOGADOR 2\n");
                 printf("X \n");

                 printf("\n ---------1---------- CORDENADAS DO JOGADOR 2    ---------1---------- CORDENADAS DO JOGADOR 2\n");

                 printf("\n ---------0---------- ZONA NEUTRA                ---------%c---------- ZONA NEUTRA\n", item);

                 printf("\n ---------1---------- CORDENADAS DO JOGADOR 1    ---------1---------- CORDENADAS DO JOGADOR 1\n");

                 printf("\n ---------2---------- CORDENADAS DO JOGADOR 1    ---------2---------- CORDENADAS DO JOGADOR 1\n");

                 printf("\n ---------3---------- CORDENADAS DO JOGADOR 1    ---------3---------- CORDENADAS DO JOGADOR 1\n\n\n");

    char res;
    printf("DESEJA VOLTAR AO MENU ? S/N ? \n");
    fflush(stdin);
    scanf("%c", &res);
    if(res == 'S' || res == 's'){
    main();
    }

    /*do {
    printf("DESEJA VOLTAR AO MENU ? S/N ? \n");
    fflush(stdin);
    scanf("%c", &res);

    switch(res){
        case 'S' :
                main();

        case 's' :
                main();

    }
   }while(res!='s' || res != 'S');*/
}

int main() {

    setlocale(LC_ALL, "portuguese");
    int op;
    int time_skip = 3;// intervalo de tempo em segundos
    menu();
    printf("\n\n");
    printf("ESCOLHA UMA DAS OP��ES \n");
    scanf("%d", &op);
    switch(op) {
    case 1:
        sleep(time_skip); // pausa por um intervalo de tempo
        system("cls");
        sair();
        break;
    case 2:
        sleep(time_skip); // pausa por um intervalo de tempo
        system("cls");
        carregando();
        game();
    case 3:
        system("cls");
        carregando();
        howtoplay();

    return 0;
  }

}
